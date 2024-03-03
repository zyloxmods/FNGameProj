#pragma once
#include "CoreMinimal.h"
#include "EFortKeybindForcedHoldStatus.generated.h"

UENUM(BlueprintType)
enum class EFortKeybindForcedHoldStatus : uint8 {
    NoForcedHold,
    ForcedHold,
    NeverShowHold,
};

