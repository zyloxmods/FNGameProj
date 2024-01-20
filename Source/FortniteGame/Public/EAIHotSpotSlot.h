#pragma once
#include "CoreMinimal.h"
#include "EAIHotSpotSlot.generated.h"

UENUM(BlueprintType)
enum class EAIHotSpotSlot : uint8 {
    Free,
    Claimed,
    Occupied,
    Blocked,
    Disabled,
};

