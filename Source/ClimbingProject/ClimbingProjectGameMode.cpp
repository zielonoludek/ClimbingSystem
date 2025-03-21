// Copyright Epic Games, Inc. All Rights Reserved.

#include "ClimbingProjectGameMode.h"
#include "ClimbingProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

AClimbingProjectGameMode::AClimbingProjectGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
