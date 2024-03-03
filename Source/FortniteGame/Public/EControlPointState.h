#pragma once
#include "CoreMinimal.h"
#include "EControlPointState.generated.h"

UENUM(BlueprintType)
enum class EControlPointState : uint8 {
    None,
    Disabled,
    Enabled,
};

