#pragma once
#include "CoreMinimal.h"
#include "EBattlePassRewardSource.generated.h"

UENUM(BlueprintType)
enum class EBattlePassRewardSource : uint8 {
    None,
    ChallengeBundle,
    Quest,
};

