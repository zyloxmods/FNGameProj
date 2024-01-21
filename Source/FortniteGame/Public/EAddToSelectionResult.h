#pragma once
#include "CoreMinimal.h"
#include "EAddToSelectionResult.generated.h"

UENUM(BlueprintType)
enum class EAddToSelectionResult : uint8 {
    Added,
    Removed,
    AtLimit,
    None,
};

