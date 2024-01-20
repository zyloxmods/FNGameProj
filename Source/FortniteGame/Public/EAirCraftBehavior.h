#pragma once
#include "CoreMinimal.h"
#include "EAirCraftBehavior.generated.h"

UENUM(BlueprintType)
enum class EAirCraftBehavior : uint8 {
    Default,
    OpposingAirCraftForEachTeam,
    FlyTowardFirstCircleCenter,
    NoAircraft,
};

