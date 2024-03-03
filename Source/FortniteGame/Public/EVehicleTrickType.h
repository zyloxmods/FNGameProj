#pragma once
#include "CoreMinimal.h"
#include "EVehicleTrickType.generated.h"

UENUM(BlueprintType)
enum class EVehicleTrickType : uint8 {
    None,
    RollIncrement,
    ReverseRollIncrement,
    YawIncrement,
    ReverseYawIncrement,
    PitchIncrement,
    ReversePitchIncrement,
    HeightIncrement,
    DistanceIncrement,
    AirTimeIncrement,
    ShoppingCart_Flying,
    ShoppingCart_Stooping,
    StartedLanding,
    FailedLanding,
    Cancelled,
    StuckLanding,
    Count,
};

