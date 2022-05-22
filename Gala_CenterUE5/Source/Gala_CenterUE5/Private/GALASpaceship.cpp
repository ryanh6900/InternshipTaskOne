// Fill out your copyright notice in the Description page of Project Settings.


#include "GALASpaceship.h"
//#include "FloatingPawnMovement.h"
// Sets default values
AGALASpaceship::AGALASpaceship()
{
	PrimaryActorTick.bCanEverTick = true; // Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));

	shipMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	shipMesh->SetupAttachment(RootComponent);
	shipMesh->SetRelativeScale3D(FVector(0.35f, 0.35f, 0.35f));

	/*control = CreateDefaultSubobject<AVehicleControlModule>(TEXT("ControlModule"));
	control->AttachToComponent(RootComponent,FAttachmentTransformRules::KeepRelativeTransform,NAME_None);
	control->SetActorLocationAndRotation(controlModuleSpawnLocation, controlModuleSpawnRotator);*/

	cameraSpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraSpringArm"));
	cameraSpringArm->SetupAttachment(RootComponent);
	// spot to set up relative location,rotations, and scale based on scene 
	cameraSpringArm->SetRelativeLocationAndRotation(FVector(1240, 0, 720), FRotator(-20, 180, 0));
	cameraSpringArm->TargetArmLength = 400.0f;
	cameraSpringArm->bEnableCameraLag = true;
	cameraSpringArm->CameraLagSpeed = 3.0f;

	spaceshipCam = CreateDefaultSubobject<UCameraComponent>(TEXT("SpaceshipCam"));
	//filler where to set up relative location and rotations 
	spaceshipCam->SetupAttachment(RootComponent);
	spaceshipCam->SetupAttachment(cameraSpringArm, USpringArmComponent::SocketName);
	activeCameras.push_back(spaceshipCam);
	currentCamIndex = 0;
}



// Called when the game starts or when spawned
void AGALASpaceship::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AGALASpaceship::Tick(float DeltaTime)
{
	//Calculate Thrust
	//const float currentAcceleration = -GetActorRotation().Pitch * DeltaTime * Acceleration;
	const float currentAcceleration =  DeltaTime * Acceleration;
	const float newForwardSpeed = currentForwardSpeed * currentAcceleration;
	const float newSideSpeed = currentYawSpeed * currentAcceleration;
	currentForwardSpeed = FMath::Clamp(newForwardSpeed, minSpeed, maxSpeed);

	const FVector localMove = FVector(currentForwardSpeed * DeltaTime, newSideSpeed* DeltaTime, 0.f);
	AddActorLocalOffset(-localMove, true);


	FRotator deltaRot(0, 0, 0);
	deltaRot.Pitch = -currentPitchSpeed * DeltaTime;
	deltaRot.Yaw = currentYawSpeed * DeltaTime;
	deltaRot.Roll = -currentRollSpeed * DeltaTime;

	AddActorLocalRotation(deltaRot);
	GEngine->AddOnScreenDebugMessage(0, 0.f, FColor::Green, FString::Printf(TEXT("Forward Speed: %f"), currentForwardSpeed));
	Super::Tick(DeltaTime);
}



// Called to bind functionality to input
void AGALASpaceship::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	check(PlayerInputComponent);
	//might use below inputs when I am playing with how I want the spaceship physics entity to work.
	/*SpaceshipInputComponent->BindAction("Jump", IE_Pressed, this, &AGALASpaceship::OnBreakPressed);
	SpaceshipInputComponent->BindAction("Jump", IE_Released, this, &AGALASpaceship::OnBreakReleased);
	SpaceshipInputComponent->BindAxis("Forward/Backward Movement", this, &AGALASpaceship::MoveSpaceshipForwardAxis); 
	SpaceshipInputComponent->BindAxis("Left/Right Movement", this, &AGALASpaceship::MoveSpaceshipHorizontalAxis);*/

	PlayerInputComponent->BindAxis("Horizontal Look Mouse", this, &AGALASpaceship::ProcessMouseXInput);
	PlayerInputComponent->BindAxis("Left/Right Movement", this, &AGALASpaceship::ProcessYawInput);
	PlayerInputComponent->BindAxis("Vertical Look Mouse", this, &AGALASpaceship::ProcessMouseYInput);
	//PlayerInputComponent->BindAxis("Forward/Backward Movement", this, &AGALASpaceship::ProcessKeyPitch);
	PlayerInputComponent->BindAxis("Forward/Backward Movement", this, &AGALASpaceship::ProcessThrustInput);

	PlayerInputComponent->BindAction("Interact Vehicles", IE_Pressed, this, &AGALASpaceship::ExitPlayerCharacter);
	PlayerInputComponent->BindAction("Change Camera", IE_Pressed, this, &AGALASpaceship::ToggleCamera);
}

void AGALASpaceship::ProcessThrustInput(float val)
{
	if (Acceleration > -100 && Acceleration < 500) Acceleration += val;
}

void AGALASpaceship::ProcessYawInput(float rate) 
{
	ProcessYaw(rate);
}
void AGALASpaceship::ProcessKeyPitch(float rate)
{
	if (FMath::Abs(rate) > .2f) ProcessPitch(rate * 2.f);
}

void AGALASpaceship::ProcessKeyRoll(float rate)
{
	if (FMath::Abs(rate) > .2f) ProcessRoll(rate * 2.f);
}

void AGALASpaceship::ProcessMouseXInput(float val)
{
	ProcessRoll(val);
}

void AGALASpaceship::ProcessMouseYInput(float val)
{
	ProcessPitch(val);
}

void AGALASpaceship::ProcessPitch(float val)
{
	bIntentionalPitch = FMath::Abs(val) > 0.f;
	const float targetPitchSpeed = val * pitchRateMultiplier;
	currentPitchSpeed = FMath::FInterpTo(currentPitchSpeed, targetPitchSpeed, GetWorld()->GetDeltaSeconds(), 2.f);
}

void AGALASpaceship::ProcessRoll(float val)
{
	bIntentionalRoll = FMath::Abs(val) > 0.f;
	if (bIntentionalPitch && !bIntentionalRoll) return;
	const float targetRollSpeed = bIntentionalRoll ? val * rollRateMultiplier : GetActorRotation().Roll * 2.f;
	currentRollSpeed = FMath::FInterpTo(currentRollSpeed, targetRollSpeed, GetWorld()->GetDeltaSeconds(), 2.f);
}

void AGALASpaceship::ProcessYaw(float val) 
{
	bIntentionalYaw = FMath::Abs(val) > 0.f;
	const float targetYawSpeed = val * yawRateMultiplier;
	currentYawSpeed = FMath::FInterpTo(currentYawSpeed, targetYawSpeed, GetWorld()->GetDeltaSeconds(), 2.f);
}

void AGALASpaceship::ToggleCamera() 
{
	currentCamIndex++;
	
}

void AGALASpaceship::EnterPlayerCharacter(AGALAPlayerFP* driver) {
	if (driver) {
		driverPlayer = driver;
		interiorCam = driver->playerFPCam;
		driverPlayer->SetActorEnableCollision(false);
		driver->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform, NAME_None);
		if (driver->Controller) {
			driver->Controller->Possess(this);
			activeCameras.push_back(interiorCam);
		}
	}
}

void AGALASpaceship::ExitPlayerCharacter()
{
	if (driverPlayer) {
		driverPlayer->DetachFromActor(FDetachmentTransformRules::KeepRelativeTransform);
		driverPlayer->SetActorEnableCollision(true);
		//driverPlayer->AddActorLocalOffset() //add local offset depending on where you want the character to be after done driving
		//driverPlayer->SetActorRotation() //set rotation based on where I want the character to be facing when I am done driving.
		if (Controller) {
			Controller->Possess(driverPlayer);
			activeCameras.erase(activeCameras.end());
			driverPlayer = NULL;
			interiorCam = NULL;
		}
	}
}

void AGALASpaceship::SpawnControlModule(FVector location, FRotator rotation) //not being used
{
	if (spaceshipControlModule) {
		UWorld* world = GetWorld();
		FActorSpawnParameters spawnParams;
		spawnParams.Owner = this;
		AVehicleControlModule* control = world->SpawnActor<AVehicleControlModule>(spaceshipControlModule, location, rotation, spawnParams);
		control->AttachToComponent(shipMesh, FAttachmentTransformRules::KeepRelativeTransform, NAME_None);
	}
}

