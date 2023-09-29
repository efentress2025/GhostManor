// Copyright Epic Games, Inc. All Rights Reserved.

#include "GhostManorGameMode.h"
#include "GhostManorCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGhostManorGameMode::AGhostManorGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
