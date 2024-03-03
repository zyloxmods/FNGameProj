#pragma once
#include "CoreMinimal.h"
#include "EObstacleType.generated.h"

UENUM(BlueprintType)
enum class EObstacleType : uint8 {
    IncomingSmashable,
    BlockingSmashable,
    BlockingDetectedTrap,
    Unknown,
    Count = 0x3,
};

