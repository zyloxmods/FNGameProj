#pragma once
#include "CoreMinimal.h"
#include "EMobileInteractionIconTypes.generated.h"

UENUM(BlueprintType)
enum class EMobileInteractionIconTypes : uint8 {
    Interact,
    Swap,
    Revive,
    Blocked,
    MAX,
};

