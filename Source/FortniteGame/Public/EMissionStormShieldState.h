#pragma once
#include "CoreMinimal.h"
#include "EMissionStormShieldState.generated.h"

UENUM(BlueprintType)
enum class EMissionStormShieldState : uint8 {
    IDLE,
    GROWING,
    SHRINKING,
    MAX,
};

