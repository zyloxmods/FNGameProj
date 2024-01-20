#pragma once
#include "CoreMinimal.h"
#include "EInputActionState.generated.h"

UENUM(BlueprintType)
enum class EInputActionState : uint8 {
    Enabled,
    Disabled,
    Hidden,
    HiddenAndDisabled,
};

