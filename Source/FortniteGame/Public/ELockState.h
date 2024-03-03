#pragma once
#include "CoreMinimal.h"
#include "ELockState.generated.h"

UENUM(BlueprintType)
enum class ELockState : uint8 {
    INVALID,
    UNLOCKED,
    LOCKED,
};

