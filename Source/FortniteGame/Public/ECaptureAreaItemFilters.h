#pragma once
#include "CoreMinimal.h"
#include "ECaptureAreaItemFilters.generated.h"

UENUM(BlueprintType)
enum class ECaptureAreaItemFilters : uint8 {
    None,
    Both,
    ForPeriodicScoring,
    ToTakeControl,
};

