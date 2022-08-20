#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortProximityBasedGEApplicationType : uint8 
{
	ApplyOnProximityTouch,
	ApplyOnlyDuringProximityTouch,
	ApplyOnProximityExit,
	ApplyOnProximityPrePulse,
	EFortProximityBasedGEApplicationType_MAX,
};
