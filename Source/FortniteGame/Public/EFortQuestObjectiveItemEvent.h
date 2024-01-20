#pragma once
#include "CoreMinimal.h"
#include "EFortQuestObjectiveItemEvent.generated.h"

UENUM(BlueprintType)
enum class EFortQuestObjectiveItemEvent : uint8 {
    Craft,
    Collect,
    Acquire,
    Consume,
    OpenCardPack,
    PurchaseCardPack,
    Convert,
    Upgrade,
    UpgradeRarity,
    QuestComplete,
    AssignWorker,
    LevelUpCollectionBook,
    LevelUpAthenaSeason,
    LevelUpBattlePass,
    GainAthenaSeasonXp,
    HasItem,
    HasAccumulatedItem,
    SlotInCollection,
    AlterationRespec,
    AlterationUpgrade,
    HasCompletedQuest,
    HasAssignedWorker,
    HasUpgraded,
    HasConverted,
    HasUpgradedRarity,
    HasLeveledUpCollectionBook,
    SlotHeroInLoadout,
    HasLeveledUpAthenaSeason,
    HasLeveledUpBattlePass,
    HasGainedAthenaSeasonXp,
    MinigameTime,
    Max_None,
};

