#pragma once
#include "CoreMinimal.h"
#include "EQuestUpdateType.generated.h"

UENUM(BlueprintType)
enum class EQuestUpdateType : uint8 {
    ObjectiveCompleted,
    QuestCompleted,
    ObjectiveUpdated,
    QuestUpdated,
    QuestAndObjectiveUpdate,
};

