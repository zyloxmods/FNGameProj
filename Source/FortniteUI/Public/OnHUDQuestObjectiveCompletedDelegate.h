#pragma once
#include "CoreMinimal.h"
#include "OnHUDQuestObjectiveCompletedDelegate.generated.h"

class UFortQuestObjectiveInfo;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHUDQuestObjectiveCompleted, UFortQuestObjectiveInfo*, QuestObjective);

