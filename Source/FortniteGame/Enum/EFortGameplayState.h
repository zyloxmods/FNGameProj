#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortGameplayState : uint8 
{
	WaitingToStart,
	EndOfZone,
	EnteringZone,
	LeavingZone,
	Invalid,
	EFortGameplayState_MAX,
};
