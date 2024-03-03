#pragma once
#include "CoreMinimal.h"
#include "ECountdownDisplay.generated.h"

UENUM(BlueprintType)
enum class ECountdownDisplay : uint8 {
    EventEndTime,
    ChallengeUnlockTime,
    ChallengeBundleUnlockTime,
    UnlockAlreadySet,
    MAX,
};

