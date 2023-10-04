// Fill out your copyright notice in the Description page of Project Settings.


#include "MySecond.h"
#include "MyFirst.h"
// Sets default values


AMySecond::AMySecond()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMySecond::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMySecond::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

