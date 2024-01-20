#pragma once
#include "CoreMinimal.h"
#include "EVehicleTrickAxis.generated.h"

UENUM(BlueprintType)
enum class EVehicleTrickAxis : uint8 {
    X,
    XNeg,
    Y,
    YNeg,
    Z,
    ZNeg,
    Count,
};

