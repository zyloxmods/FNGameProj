#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortCombatEventContribution : uint8 
{
	Inverse,
	Accumulator,
	Max_None,
	EFortCombatEventContribution_MAX,
};
