#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortRequestedGameplayAction : uint8 
{
	StartPlaying,
	StopPlaying,
	EnterZone,
	LeaveZone,
	ReturnToMainMenu,
	QuitGame,
	Invalid,
	EFortRequestedGameplayAction_MAX,
};
