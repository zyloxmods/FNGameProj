#pragma once
#include "CoreMinimal.h"
#include "ECollectionSelectionMethod.generated.h"

UENUM(BlueprintType)
enum class ECollectionSelectionMethod : uint8 {
    TierAsIndex,
    TierAsIndexOverflowToLastValid,
    Modulo,
    Random,
    None,
};

