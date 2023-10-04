// Fill out your copyright notice in the Description page of Project Settings.


#include "MyFirst.h"

// Sets default values
AMyFirst::AMyFirst()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	CountdownText = CreateDefaultSubobject<UTextRenderComponent>(TEXT("EnterCountDownNumber"));
	CountdownText->SetHorizontalAlignment(EHTA_Center);
	CountdownText->SetWorldSize(150.0f);

	RootComponent = CountdownText;
}

// Called when the game starts or when spawned
void AMyFirst::BeginPlay()
{
	Super::BeginPlay();
	UpdateTimerDisplay();
	GetWorldTimerManager().SetTimer(CountdownTimerHandle, this, &AMyFirst::AdvanceTimer, 1.0f, true);

	MyFunction();
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

void AMyFirst::UpdateTimerDisplay()
{
	CountdownText->SetText(FText::AsNumber(FMath::Max(CountdownTime, 0)));
}

void AMyFirst::AdvanceTimer()
{
	--CountdownTime;
	UpdateTimerDisplay();
	if (CountdownTime < 1)
	{
		GetWorldTimerManager().ClearTimer(CountdownTimerHandle);
		CountdownHasFinished();
	}
}

void AMyFirst::CountdownHasFinished()
{
	CountdownText->SetText(FText::ToString(TEXT("Go!")));
}


