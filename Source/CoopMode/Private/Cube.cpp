// Fill out your copyright notice in the Description page of Project Settings.


#include "Cube.h"

// Sets default values
ACube::ACube()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACube::BeginPlay()
{
	Super::BeginPlay();
	
	UWorld* World = GetWorld();
	if (World)
	{
		const FVector CubeLocation = FVector(0, 0, 0);
		const FRotator CubeRotation = FRotator::ZeroRotator;

		AActor* CubeActor = World->SpawnActor<AActor>(
			CubeClass, CubeLocation, CubeRotation);

		if (CubeActor != nullptr)
		{
			// ...
		}
	}

}

// Called every frame
void ACube::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);



}

