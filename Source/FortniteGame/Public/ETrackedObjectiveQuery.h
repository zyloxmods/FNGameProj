#pragma once
#include "CoreMinimal.h"
#include "ETrackedObjectiveQuery.generated.h"

UENUM(BlueprintType)
enum class ETrackedObjectiveQuery : uint8 {
    All,
    ExactTeam,
    Friendly,
    Neutral,
    Hostile,
    NotFriendly,
    MAX,
};

