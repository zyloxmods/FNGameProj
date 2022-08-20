#pragma once

#include "CoreMinimal.h"

UENUM()
enum class ETrackingOffsetModifierCurve : uint8 
{
	CombatStart,
	TargetLowHealth,
	MAX,
};
