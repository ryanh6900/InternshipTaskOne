// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "VehicleControlModule.generated.h"

UCLASS(Blueprintable)
class GALA_CENTERUE5_API AVehicleControlModule : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AVehicleControlModule();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//UPROPERTY(EditAnywhere)
	//	UStaticMeshComponent* steeringWheel;
	//UPROPERTY(EditAnywhere)
	//	class UBoxComponent* promptCollider;
};
