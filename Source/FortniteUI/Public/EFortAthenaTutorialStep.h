#pragma once
#include "CoreMinimal.h"
#include "EFortAthenaTutorialStep.generated.h"

UENUM(BlueprintType)
enum class EFortAthenaTutorialStep : uint8 {
    Look,
    Move,
    Harvest,
    Pickup,
    Shoot,
    Ambush,
    Heal,
    Build,
    Chest,
    Scoping,
    Completed,
    Count,
};

