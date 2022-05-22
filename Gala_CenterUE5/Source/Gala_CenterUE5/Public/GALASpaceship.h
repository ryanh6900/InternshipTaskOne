// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/InputComponent.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include <vector>
#include "GameFramework/Pawn.h"
#include "GALAPlayerFP.h"
#include "GameFramework/FloatingPawnMovement.h"
#include "VehicleControlModule.h"
#include "GALASpaceship.generated.h"

UCLASS()
class GALA_CENTERUE5_API AGALASpaceship : public APawn
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere,Category = "Flight")
	float Acceleration = 0;
	UPROPERTY(EditAnywhere, Category = "Flight")
	float maxSpeed = 4000.f;
	UPROPERTY(EditAnywhere, Category = "Flight")
	float minSpeed = 500.f;

	UPROPERTY(EditAnywhere, Category = "Flight")
	float pitchRateMultiplier = 200.f;
	UPROPERTY(EditAnywhere, Category = "Flight")
	float rollRateMultiplier = 200.f;
	UPROPERTY(EditAnywhere, Category = "Flight")
	float yawRateMultiplier = 200.f;

	UPROPERTY(VisibleAnywhere, Category = "Flight")
	float currentForwardSpeed = 500.f;

	float currentYawSpeed;
	float currentPitchSpeed;
	float currentRollSpeed;
	
	UPROPERTY(Category = "Camera", VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
		USpringArmComponent* cameraSpringArm;
	UPROPERTY(Category = "Camera", VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
		UCameraComponent* spaceshipCam;
	UPROPERTY(Category = "Camera", VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
		UCameraComponent* interiorCam;
	UPROPERTY(Category = "Mesh", VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
		UStaticMeshComponent* shipMesh; //we might not need.

	/*UPROPERTY(Category = "Control", VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
		UStaticMeshComponent* controlModule;*/
	//UPROPERTY(CPF_BlueprintCallable);
		
	UPROPERTY()
		AGALAPlayerFP* driverPlayer;

	std::vector<UCameraComponent*> activeCameras;
	int currentCamIndex;
	/*UPROPERTY()
		AVehicleControlModule* control;*/
	bool bIntentionalPitch = false;
	bool bIntentionalRoll = false;
	bool bIntentionalYaw = false;

public:
	// Sets default values for this pawn's properties
	AGALASpaceship();

	UPROPERTY(EditAnywhere)
	TSubclassOf<AVehicleControlModule> spaceshipControlModule;
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
		bool playerNearControlModule;
	UFUNCTION(BlueprintCallable) 
	void SpawnControlModule(FVector location, FRotator rotation); //not being used.

protected:
	//void SpawnControlModule(FVector location, FRotator rotation);
	void MoveSpaceshipForwardAxis(float val);
	void MoveSpaceshipHorizontalAxis(float val);
	void OnBreakPressed();
	void OnBreakReleased();
#pragma region CarFunctions
	void ApplyThrottle(float val);
	void ApplySteering(float val);
	void LookUp(float val);
	void Turn(float val);
#pragma endregion
#pragma region
	void ProcessThrustInput(float val);
	void ProcessKeyPitch(float rate);
	void ProcessYawInput(float rate);
	void ProcessKeyRoll(float rate);

	void ProcessMouseXInput(float val);
	void ProcessMouseYInput(float val);
	void ProcessPitch(float val);
	void ProcessRoll(float val);
	void ProcessYaw(float val);
	virtual void BeginPlay() override; // Called when the game starts or when spawned
#pragma endregion PlaneFunctions
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	void ToggleCamera();
	void TurnOnEngine();
	void TurnOffEngine();
	void EnterPlayerCharacter(AGALAPlayerFP* driver);
	void ExitPlayerCharacter();
	FVector controlModuleSpawnLocation = FVector(0,0, 0);
	FRotator controlModuleSpawnRotator = FRotator(0, 0, 0);
private:
	bool inAir;
};
