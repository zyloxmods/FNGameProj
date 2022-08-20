#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EMashPhase : uint8 
{
	Preparation,
	Survival,
	AfterMath,
	Moving,
	FinalPhase,
	FinalPhaseFullStorm,
	MAX,
};
