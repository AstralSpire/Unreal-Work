// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "Components/TextRenderComponent.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyFirst.generated.h"


UCLASS()
class UELABWORK_API AMyFirst : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyFirst();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	UFUNCTION(BlueprintCallable,Category = "MyCategory")
	void MyFunction();
	UFUNCTION(BlueprintCallable,Category = "Calc")
	int32 AddNums(int32 x, int32 y);
	
	
	
	UTextRenderComponent* MyText;
};
