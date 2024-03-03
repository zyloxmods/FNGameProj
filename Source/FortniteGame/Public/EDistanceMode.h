#pragma once
#include "CoreMinimal.h"
#include "EDistanceMode.generated.h"

UENUM(BlueprintType)
enum class EDistanceMode : uint8 {
    DistItemToContext,
    DistItemGoalActorToContext,
    DistItemToItemGoalActor,
};

