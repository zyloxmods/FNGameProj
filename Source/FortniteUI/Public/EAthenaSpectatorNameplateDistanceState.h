#pragma once
#include "CoreMinimal.h"
#include "EAthenaSpectatorNameplateDistanceState.generated.h"

UENUM(BlueprintType)
enum class EAthenaSpectatorNameplateDistanceState : uint8 {
    Near,
    MidDistance,
    FurtherThanMaxDistance,
};

