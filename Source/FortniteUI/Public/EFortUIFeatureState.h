#pragma once
#include "CoreMinimal.h"
#include "EFortUIFeatureState.generated.h"

UENUM(BlueprintType)
enum class EFortUIFeatureState : uint8 {
    Enabled,
    Disabled,
    Hidden,
    Invalid,
};

