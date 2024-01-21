#pragma once
#include "CoreMinimal.h"
#include "EDynamicFoundationEnabledState.generated.h"

UENUM(BlueprintType)
enum class EDynamicFoundationEnabledState : uint8 {
    Unknown,
    Enabled,
    Disabled,
};

