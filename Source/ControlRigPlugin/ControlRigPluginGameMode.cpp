// Copyright Epic Games, Inc. All Rights Reserved.

#include "ControlRigPluginGameMode.h"
#include "ControlRigPluginCharacter.h"
#include "UObject/ConstructorHelpers.h"

AControlRigPluginGameMode::AControlRigPluginGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
