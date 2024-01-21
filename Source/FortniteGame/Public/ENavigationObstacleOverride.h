#pragma once
#include "CoreMinimal.h"
#include "ENavigationObstacleOverride.generated.h"

UENUM(BlueprintType)
enum class ENavigationObstacleOverride : uint8 {
    UseMeshSettings,
    ForceEnabled,
    ForceDisabled,
};

