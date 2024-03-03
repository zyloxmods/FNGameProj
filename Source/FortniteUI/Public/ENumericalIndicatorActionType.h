#pragma once
#include "CoreMinimal.h"
#include "ENumericalIndicatorActionType.generated.h"

UENUM(BlueprintType)
enum class ENumericalIndicatorActionType : uint8 {
    Adding,
    Removing,
    Nothing,
};

