// Fill out your copyright notice in the Description page of Project Settings.


#include "GALAPlayerFP.h"
#include "GALASpaceship.h"
#include "EngineUtils.h"
// Sets default values
AGALAPlayerFP::AGALAPlayerFP()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	AutoPossessPlayer = EAutoReceiveInput::Player0;
	GetCapsuleComponent()->InitCapsuleSize(55.f, 96.0f);
	playerFPCam = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCamera"));
	playerFPCam->SetupAttachment(GetCapsuleComponent());
	playerFPCam->SetRelativeLocation(FVector(50, 0, 64.f)); // Position the camera
	playerFPCam->bUsePawnControlRotation = true;
}

// Called when the game starts or when spawned
void AGALAPlayerFP::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AGALAPlayerFP::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AGALAPlayerFP::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &AGALAPlayerFP::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &AGALAPlayerFP::StopJumping);

	PlayerInputComponent->BindAxis("Forward/Backward Movement", this, &AGALAPlayerFP::MoveForwardAxis);
	PlayerInputComponent->BindAxis("Left/Right Movement", this, &AGALAPlayerFP::MoveHorizontalAxis);

	PlayerInputComponent->BindAxis("Horizontal Look Mouse", this, &AGALAPlayerFP::LookHorizontal);
	PlayerInputComponent->BindAxis("Vertical Look Mouse", this, &AGALAPlayerFP::LookVertical);

	PlayerInputComponent->BindAction("InteractVehicles", IE_Pressed, this, &AGALAPlayerFP::DriveSpaceship);
}


void AGALAPlayerFP::MoveForwardAxis(float val) {
	if (val) {
		AddMovementInput(GetActorForwardVector(), val);
	}
}

void AGALAPlayerFP::MoveHorizontalAxis(float val) {
	if (val) {
		AddMovementInput(GetActorRightVector(), val);
	}
}

void AGALAPlayerFP::LookHorizontal(float val) {
	if (val) {
		AddControllerYawInput(val);
	}
}

void AGALAPlayerFP::LookVertical(float val) {
	if (val) {
		AddControllerPitchInput(val);
	}
}

void AGALAPlayerFP::DriveSpaceship() {
	
	for (TActorIterator<AGALASpaceship> Spaceship(GetWorld()); Spaceship; ++Spaceship) {
		if (Spaceship->playerNearControlModule) {
			Spaceship->EnterPlayerCharacter(this);
			break;
		}
	}
}


