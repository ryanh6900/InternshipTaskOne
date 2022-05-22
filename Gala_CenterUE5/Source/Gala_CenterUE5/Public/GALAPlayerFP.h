// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "GameFramework/InputSettings.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GALAPlayerFP.generated.h"

UCLASS()
class GALA_CENTERUE5_API AGALAPlayerFP : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AGALAPlayerFP();
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
		UCameraComponent* playerFPCam;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	void MoveForwardAxis(float val);
	void MoveHorizontalAxis(float val);
	void LookHorizontal(float val);
	void LookVertical(float val);
	void DriveSpaceship();
	/*UFUNCTION(Server, Reliable, WithValidation);
	void ServerEnterSpaceship();*/
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	bool isDriving;

};
