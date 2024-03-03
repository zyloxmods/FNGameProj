#pragma once
#include "CoreMinimal.h"
#include "EAthenaGameFeatureStatus.generated.h"

UENUM(BlueprintType)
enum class EAthenaGameFeatureStatus : uint8 {
    InProgress,
    ProgressPaused,
    ErrorOccured,
};

