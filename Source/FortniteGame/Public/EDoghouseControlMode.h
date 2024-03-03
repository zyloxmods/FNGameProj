#pragma once
#include "CoreMinimal.h"
#include "EDoghouseControlMode.generated.h"

UENUM(BlueprintType)
enum class EDoghouseControlMode : uint8 {
    GroundControls,
    AirControls,
    MaxCount,
};

