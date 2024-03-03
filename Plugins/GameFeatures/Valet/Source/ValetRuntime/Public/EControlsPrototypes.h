#pragma once
#include "CoreMinimal.h"
#include "EControlsPrototypes.generated.h"

UENUM(BlueprintType)
enum class EControlsPrototypes : uint8 {
    CameraSteering,
    NonCameraSteering,
    HybridCameraSteering,
    MaxCount,
};

