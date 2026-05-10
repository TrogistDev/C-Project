// Fill out your copyright notice in the Description page of Project Settings.


#include "MovingPlataform.h"

// Sets default values
AMovingPlataform::AMovingPlataform()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void MyTestFunction(float MyValueParam, FString MyStringParam) {

	UE_LOG(LogTemp, Display, TEXT("This is as Test Function %f"), MyValueParam);
	UE_LOG(LogTemp, Display, TEXT("MyStringParam is %s"), *MyStringParam);
};

// Called when the game starts or when spawned
void AMovingPlataform::BeginPlay()
{
	Super::BeginPlay();

	StartLocation = GetActorLocation();

	/*FString MyString = GetName();
	MyTestFunction(0.0f, MyString);*/

	/*float MyFloat = 1.23f;
	UE_LOG(LogTemp, Display, TEXT("My Float is: %f"), MyFloat)

		FString MyName = "Gustavo";
		UE_LOG(LogTemp, Display, TEXT("My name is: %s "), *MyName);*/

	/*int MyValue = -2;
	int AnotherValue = -5;
		int Result = MyValue + AnotherValue;
		UE_LOG(LogTemp, Display, TEXT("This is the value: %d"), Result);*/

	//UE_LOG(LogTemp,Display, TEXT("My Member Variable is %d"), MemberInt)


	/*FVector TestVector = FVector(1.2f, 4.5f, 2.5f);

	SetActorLocation(MyVector);*/

}

// Called every frame
void AMovingPlataform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// Increase XPosition by 1 Each frame
	/*MyVector.X = MyVector.X + 1;
	SetActorLocation(MyVector);*/

	MovePlataform(DeltaTime);
	RotatePlataform(DeltaTime);

}

void AMovingPlataform::MovePlataform(float DeltaTime) {


	

	DistanceMoved = GetDistanceMoved();


	if (DistanceMoved >= MoveDistance) {

	float OverShoot = MoveDistance - DistanceMoved;
	FString PlataformName = GetName();
	FVector MoveDirection = PlataformVelocity.GetSafeNormal();
	FVector NewStartLocation = StartLocation + MoveDirection * MoveDistance;
	SetActorLocation(NewStartLocation);
	StartLocation = NewStartLocation;
		
	UE_LOG(LogTemp, Display, TEXT(" %s OverShot is %f"), *PlataformName, OverShoot);

		PlataformVelocity = -PlataformVelocity;
		


	}
	else {
		FVector CurrentLocation = GetActorLocation();
		CurrentLocation = CurrentLocation + (PlataformVelocity * DeltaTime);
		SetActorLocation(CurrentLocation);
	}

}

void AMovingPlataform::RotatePlataform(float DeltaTime) {
	FRotator RotationToAdd = RotationVelocity * DeltaTime;
	AddActorLocalRotation(RotationToAdd);
}

float AMovingPlataform::GetDistanceMoved()
{
	
	return FVector::Dist(StartLocation, GetActorLocation());
}
