#pragma once
#include "CoreMinimal.h"
#include "EFrontEndRewardType.generated.h"

UENUM(BlueprintType)
enum class EFrontEndRewardType : uint8 {
    Mission,
    Quest,
    EpicNewQuest,
    Expedition,
    CollectionBook,
    MissionAlert,
    DifficultyIncrease,
    GiftBox,
    ItemCache,
    PhoenixLevelUp,
};

