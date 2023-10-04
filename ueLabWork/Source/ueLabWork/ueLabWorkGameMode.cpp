// Copyright Epic Games, Inc. All Rights Reserved.

#include "ueLabWorkGameMode.h"
#include "ueLabWorkCharacter.h"
#include "UObject/ConstructorHelpers.h"

AueLabWorkGameMode::AueLabWorkGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
