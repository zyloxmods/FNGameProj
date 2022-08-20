#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortEncounterPacingState : uint8 
{
	Peak,
	Fade,
	Rest,
	Max_None,
	EFortEncounterPacingState_MAX,
};
