#pragma once
#include "CoreMinimal.h"
#include "EChallengeBundleQuestUnlockType.generated.h"

UENUM(BlueprintType)
enum class EChallengeBundleQuestUnlockType : uint8 {
    Manually,
    GrantWithBundle,
    RequiresBattlePass,
    DaysFromEventStart,
    ChallengesCompletedToUnlock,
    BundleLevelup,
};

