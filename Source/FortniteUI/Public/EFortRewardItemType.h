#pragma once
#include "CoreMinimal.h"
#include "EFortRewardItemType.generated.h"

UENUM(BlueprintType)
enum class EFortRewardItemType : uint8 {
    RewardedBadges,
    MissedBadges,
    RewardedItems,
    RewardedAccountItems,
};

