#pragma once
#include "CoreMinimal.h"
#include "EFortUINavigationOp.generated.h"

UENUM(BlueprintType)
enum class EFortUINavigationOp : uint8 {
    PopContentStack,
    FeatureSwitch,
    NavigateToSkillTree,
    NavigateToSquadSlot,
    NavigateToQuest,
    NavigateToItemManagement,
    NavigateToExpeditions,
    NavigateToCollectionBook,
    None,
};

