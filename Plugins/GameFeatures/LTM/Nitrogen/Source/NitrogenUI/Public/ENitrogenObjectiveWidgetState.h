#pragma once
#include "CoreMinimal.h"
#include "ENitrogenObjectiveWidgetState.generated.h"

UENUM(BlueprintType)
enum class ENitrogenObjectiveWidgetState : uint8 {
    ENitrogenObjectiveWidgetState_Hidden,
    ENitrogenObjectiveWidgetState_FindFare,
    ENitrogenObjectiveWidgetState_FindTaxi,
};

