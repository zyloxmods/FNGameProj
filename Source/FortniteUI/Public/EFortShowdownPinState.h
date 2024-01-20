#pragma once
#include "CoreMinimal.h"
#include "EFortShowdownPinState.generated.h"

UENUM(BlueprintType)
enum class EFortShowdownPinState : uint8 {
    None,
    Locked,
    Unlocked,
};

