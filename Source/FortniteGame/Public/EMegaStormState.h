#pragma once
#include "CoreMinimal.h"
#include "EMegaStormState.generated.h"

UENUM(BlueprintType)
enum class EMegaStormState : uint8 {
    GatheringActorList,
    DamagingActors,
};

