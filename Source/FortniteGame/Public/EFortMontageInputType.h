#pragma once
#include "CoreMinimal.h"
#include "EFortMontageInputType.generated.h"

UENUM(BlueprintType)
enum class EFortMontageInputType : uint8 {
    WindowClickOrHold,
    WindowHoldOnly,
    InstantClick,
};

