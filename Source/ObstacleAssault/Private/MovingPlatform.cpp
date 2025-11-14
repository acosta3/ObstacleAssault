// Fill out your copyright notice in the Description page of Project Settings.


#include "MovingPlatform.h"

// Sets default values
AMovingPlatform::AMovingPlatform()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMovingPlatform::BeginPlay()
{
	Super::BeginPlay();

	FVector TestVector = FVector(1110.0f,-610.0f,440.0f);

	

	


}

// Called every frame
void AMovingPlatform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector CurrentLocation = GetActorLocation();
	// by Introducing DeltaTime, we make movement framerate independent 
	// The value 100 is the speed of the platform
	CurrentLocation.X += (100* DeltaTime);

	SetActorLocation(CurrentLocation);



	
	


}

