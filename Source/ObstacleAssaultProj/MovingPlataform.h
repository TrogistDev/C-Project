// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MovingPlataform.generated.h"

UCLASS()
class OBSTACLEASSAULTPROJ_API AMovingPlataform : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMovingPlataform();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	

	UPROPERTY(EditAnywhere)
	FVector TestVector = FVector(0.0f, 0.0f, 0.0f);

	UPROPERTY(EditAnywhere)
	FVector PlataformVelocity = FVector(0.0f, 0.0f, 0.0f);

	void MovePlataform(float DeltaTime);
	void RotatePlataform(float DeltaTime);

	FVector StartLocation;
	UPROPERTY(EditAnywhere)
	float MoveDistance = 700.0f;

	float GetDistanceMoved();

	UPROPERTY(VisibleAnywhere)
	float DistanceMoved = 0.0f;

	UPROPERTY(EditAnywhere)
	FRotator RotationVelocity;
};
