#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EIndexNavigationResult : uint8 
{
	Modified,
	Clamped,
	StepOff,
	NoMove,
	EIndexNavigationResult_MAX,
};
