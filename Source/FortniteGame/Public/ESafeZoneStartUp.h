#pragma once
#include "CoreMinimal.h"
#include "ESafeZoneStartUp.generated.h"

UENUM(BlueprintType)
enum class ESafeZoneStartUp : uint8 {
    UseDefaultGameBehavior,
    StartsWithWarmUp,
    StartsWithAirCraft,
    StartsWithNoAirCraft,
};

