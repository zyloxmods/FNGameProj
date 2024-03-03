#pragma once
#include "CoreMinimal.h"
#include "EAthenaRewardItemType.generated.h"

UENUM(BlueprintType)
enum class EAthenaRewardItemType : uint8 {
    Normal,
    HiddenReward,
    GiftboxHiddenReward,
    NonExportedFakeReward,
};

