#pragma once
#include "CoreMinimal.h"
#include "EFocusingBehavior.generated.h"

UENUM(BlueprintType)
enum class EFocusingBehavior : uint8 {
    FocusCurrentTarget,
    IgnoreThreatAfterTimer,
    IgnoreThreatAlways,
    LookAtInvestigate,
    LookAtHeardSound,
    LookAtScanAround,
    LookAtScanAroundOnly,
};

