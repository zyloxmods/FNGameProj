#pragma once
#include "CoreMinimal.h"
#include "EAssetChangeMethod.generated.h"

UENUM(BlueprintType)
enum class EAssetChangeMethod : uint8 {
    Latest,
    Minimum,
    OnlyAddNew,
    BelowDoubleTheFixedCost,
};

