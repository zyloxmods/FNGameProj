#pragma once
#include "CoreMinimal.h"
#include "ESpatialCustomizationCategoryState.generated.h"

UENUM(BlueprintType)
enum class ESpatialCustomizationCategoryState : uint8 {
    LockedByBattlePass,
    LockedByChallenge,
    LockedByChallengeCompletion,
    UnlockAvailable,
    UnlockUsed,
    Max_NONE,
};

