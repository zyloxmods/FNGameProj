#pragma once
#include "CoreMinimal.h"
#include "OnQuestObjectiveStateChangedDelegate.generated.h"

class AFortPlayerController;
class UFortQuestItemDefinition;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_SixParams(FOnQuestObjectiveStateChanged, AFortPlayerController*, Controller, const UFortQuestItemDefinition*, QuestDef, FName, BackendName, int32, CompletionCount, bool, ObjectiveCompleted, bool, QuestCompleted);

