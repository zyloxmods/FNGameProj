#pragma once
#include "CoreMinimal.h"
#include "EMatchAbandonState.generated.h"

UENUM(BlueprintType)
enum class EMatchAbandonState : uint8 {
    None,
    Joining,
    CanAbandon,
    TeamLocked,
};

