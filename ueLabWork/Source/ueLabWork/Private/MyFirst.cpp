// Fill out your copyright notice in the Description page of Project Settings.


#include "MyFirst.h"

// Sets default values
AMyFirst::AMyFirst()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyFirst::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyFirst::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

