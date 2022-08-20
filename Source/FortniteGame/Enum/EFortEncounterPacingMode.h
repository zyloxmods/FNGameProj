#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortEncounterPacingMode : uint8 
{
	IntensityCurve,
	Burst,
	Fixed,
	EFortEncounterPacingMode_MAX,
};
