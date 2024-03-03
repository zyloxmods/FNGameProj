#pragma once
#include "CoreMinimal.h"
#include "EHardyExtractionReason.generated.h"

UENUM(BlueprintType)
enum class EHardyExtractionReason : uint8 {
    Death,
    Storm,
    InventoryFull,
    TimerRunningOut,
    Unknown,
};

