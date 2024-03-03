#pragma once
#include "CoreMinimal.h"
#include "EProjectileWaterHitBehavior.generated.h"

UENUM(BlueprintType)
enum class EProjectileWaterHitBehavior : uint8 {
    Overlap,
    StopIfStopSimulatingOnHit,
    StopOnOverlap,
};

