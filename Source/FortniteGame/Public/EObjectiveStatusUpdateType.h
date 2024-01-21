#pragma once
#include "CoreMinimal.h"
#include "EObjectiveStatusUpdateType.generated.h"

UENUM(BlueprintType)
enum class EObjectiveStatusUpdateType : uint8 {
    Always,
    OnPercent,
    OnComplete,
    Never,
};

