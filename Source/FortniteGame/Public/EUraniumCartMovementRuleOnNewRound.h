#pragma once
#include "CoreMinimal.h"
#include "EUraniumCartMovementRuleOnNewRound.generated.h"

UENUM(BlueprintType)
enum class EUraniumCartMovementRuleOnNewRound : uint8 {
    NoChange,
    MoveToNextCheckpoint,
    MoveToStartOfNewSpline,
    MoveToRandomCheckPointOfNewSpline,
    MoveToNextCheckPointOfNewSpline,
};

