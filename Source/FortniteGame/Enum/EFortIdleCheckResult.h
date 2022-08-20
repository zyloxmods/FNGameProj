#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortIdleCheckResult : uint8 
{
	ActivityDetected,
	Idle,
	IdlePastMaxTime,
	EFortIdleCheckResult_MAX,
};
