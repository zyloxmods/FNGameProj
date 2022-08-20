#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFocusingBehavior : uint8 
{
	IgnoreThreatAfterTimer,
	IgnoreThreatAlways,
	LookAtInvestigate,
	LookAtHeardSound,
	LookAtScanAround,
	LookAtScanAroundOnly,
	EFocusingBehavior_MAX,
};
