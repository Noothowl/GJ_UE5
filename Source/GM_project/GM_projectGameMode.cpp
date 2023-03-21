// Copyright Epic Games, Inc. All Rights Reserved.

#include "GM_projectGameMode.h"
#include "GM_projectCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGM_projectGameMode::AGM_projectGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
