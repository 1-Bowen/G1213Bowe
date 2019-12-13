// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "G1213BowenGameMode.h"
#include "G1213BowenHUD.h"
#include "G1213BowenCharacter.h"
#include "UObject/ConstructorHelpers.h"

AG1213BowenGameMode::AG1213BowenGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AG1213BowenHUD::StaticClass();
}
