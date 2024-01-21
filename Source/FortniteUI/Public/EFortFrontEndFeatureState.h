#pragma once
#include "CoreMinimal.h"
#include "EFortFrontEndFeatureState.generated.h"

UENUM(BlueprintType)
enum class EFortFrontEndFeatureState : uint8 {
    Enabled,
    Disabled,
    Hidden,
    Invalid,
};

