// Fill out your copyright notice in the Description page of Project Settings.


#include "MyFirst.h"

// Sets default values
AMyFirst::AMyFirst()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	MyText = CreateDefaultSubobject<UTextRenderComponent>(TEXT("My Text Component")); //Initialises UTextRenderComponent
	MyText->SetWorldSize(150.f); // Set size of text
	MyText->SetText(FText::FromString(TEXT("Default Text2"))); // Set Text

	RootComponent = MyText;

}

// Called when the game starts or when spawned
void AMyFirst::BeginPlay()
{
	Super::BeginPlay();
	MyText->SetText(FText::FromString(TEXT("Begin Play!")));
	
}

// Called every frame
void AMyFirst::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMyFirst::MyFunction()
{
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Yellow,
			FString::Printf(TEXT("My first function works!")));
	}
}

int32 AMyFirst::AddNums(int32 x, int32 y)
{
	return x + y;
}



