#pragma once
#include "CoreMinimal.h"
#include "EFortChallengeBundleInfoLockedReasonCode.generated.h"

UENUM(BlueprintType)
enum class EFortChallengeBundleInfoLockedReasonCode : uint8 {
    Unlocked,
    NoKnownUnlockMethod,
    PurchaseTheBattlePass,
    ReachSpecificTier,
    TimeLeftBeforeUnlock,
};

