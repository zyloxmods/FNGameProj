#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortIdleDetectionState : uint8 
{
	Default,
	Suspicious,
	Problematic,
	Inactive,
	EFortIdleDetectionState_MAX,
};
