#pragma once
#include "CoreMinimal.h"
#include "EDiscoCaptureProgressState.generated.h"

UENUM(BlueprintType)
enum class EDiscoCaptureProgressState : uint8 {
    None,
    AllyProgress,
    EnemyProgress,
};

