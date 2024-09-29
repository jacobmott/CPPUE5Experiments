// Copyright Epic Games, Inc. All Rights Reserved.

#include "CPPUE5ExperimentsGameMode.h"
#include "CPPUE5ExperimentsCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACPPUE5ExperimentsGameMode::ACPPUE5ExperimentsGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
