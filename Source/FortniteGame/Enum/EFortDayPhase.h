#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortDayPhase : uint8 
{
	Day,
	Evening,
	Night,
	NumPhases,
	EFortDayPhase_MAX,
};
