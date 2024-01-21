#pragma once
#include "CoreMinimal.h"
#include "EVehicleMovementMode.generated.h"

UENUM(BlueprintType)
enum class EVehicleMovementMode : uint8 {
    OnGround,
    InAir,
    WipeOut,
    MaxCount,
};

