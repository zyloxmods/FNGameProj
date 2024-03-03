#pragma once
#include "CoreMinimal.h"
#include "ESelectionProperty.generated.h"

UENUM(BlueprintType)
enum class ESelectionProperty : uint8 {
    SingleObject,
    MultipleObjects,
    MultipleObjectsMoveOnGrid,
    None,
};

