#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortBudgetCategory : uint8 
{
	Simulation,
	Rendering,
	Network,
	Audio,
	Max,
};
