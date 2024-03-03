#pragma once
#include "CoreMinimal.h"
#include "ESmartObjectSlotState.generated.h"

UENUM(BlueprintType)
enum class ESmartObjectSlotState : uint8 {
    Free,
    Claimed,
    Occupied,
    MAX,
};

