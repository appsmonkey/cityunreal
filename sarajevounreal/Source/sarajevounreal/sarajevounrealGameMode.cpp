// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "sarajevounreal.h"
#include "sarajevounrealGameMode.h"
#include "sarajevounrealHUD.h"
#include "sarajevounrealCharacter.h"

AsarajevounrealGameMode::AsarajevounrealGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AsarajevounrealHUD::StaticClass();
}
