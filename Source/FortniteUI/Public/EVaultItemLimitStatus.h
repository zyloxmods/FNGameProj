#pragma once
#include "CoreMinimal.h"
#include "EVaultItemLimitStatus.generated.h"

UENUM(BlueprintType)
enum class EVaultItemLimitStatus : uint8 {
    WellBelowCapacity,
    NearCapacity,
    AtCapacity,
    OverCapacity,
};

