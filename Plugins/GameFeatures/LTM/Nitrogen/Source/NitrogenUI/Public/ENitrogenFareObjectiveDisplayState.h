#pragma once
#include "CoreMinimal.h"
#include "ENitrogenFareObjectiveDisplayState.generated.h"

UENUM(BlueprintType)
enum class ENitrogenFareObjectiveDisplayState : uint8 {
    Default,
    Success,
    Failure,
};

