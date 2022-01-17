// Copyright Epic Games, Inc. All Rights Reserved.

#include "FishFlapping1GameMode.h"
#include "FishFlapping1PlayerController.h"
#include "FishFlapping1Character.h"
#include "UObject/ConstructorHelpers.h"

AFishFlapping1GameMode::AFishFlapping1GameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AFishFlapping1PlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}