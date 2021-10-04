// Copyright Epic Games, Inc. All Rights Reserved.

#include "UnstableGameMode.h"
#include "UnstableCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUnstableGameMode::AUnstableGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
