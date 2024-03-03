#pragma once
#include "CoreMinimal.h"
#include "ECreativeKeyLockState.generated.h"

UENUM(BlueprintType)
enum class ECreativeKeyLockState : uint8 {
    LOCKED,
    UNLOCKED,
    INVALID,
};

