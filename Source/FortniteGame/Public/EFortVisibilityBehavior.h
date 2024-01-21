#pragma once
#include "CoreMinimal.h"
#include "EFortVisibilityBehavior.generated.h"

UENUM(BlueprintType)
enum class EFortVisibilityBehavior : uint8 {
    Proximity,
    OnceSeenAlwaysSeen,
    AlwaysSeen,
    Invalid,
};

