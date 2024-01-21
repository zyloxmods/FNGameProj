#pragma once
#include "CoreMinimal.h"
#include "EStormSurgeThresholdType.generated.h"

UENUM(BlueprintType)
enum class EStormSurgeThresholdType : uint8 {
    None,
    Above,
    Below,
    Equal,
};

