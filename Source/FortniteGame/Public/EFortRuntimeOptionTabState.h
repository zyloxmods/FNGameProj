#pragma once
#include "CoreMinimal.h"
#include "EFortRuntimeOptionTabState.generated.h"

UENUM(BlueprintType)
enum class EFortRuntimeOptionTabState : uint8 {
    Default,
    Disabled,
    Hidden,
};

