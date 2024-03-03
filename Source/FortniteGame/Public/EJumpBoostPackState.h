#pragma once
#include "CoreMinimal.h"
#include "EJumpBoostPackState.generated.h"

UENUM(BlueprintType)
enum class EJumpBoostPackState : uint8 {
    Idle,
    Boost,
    Hovering,
    Falling,
    None,
};

