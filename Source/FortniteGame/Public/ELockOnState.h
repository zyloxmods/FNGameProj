#pragma once
#include "CoreMinimal.h"
#include "ELockOnState.generated.h"

UENUM(BlueprintType)
enum class ELockOnState : uint8 {
    NoTarget,
    TargetAcquired,
    LockingOnToTarget,
    TargetLockedOn,
    Cooldown,
    COUNT,
};

