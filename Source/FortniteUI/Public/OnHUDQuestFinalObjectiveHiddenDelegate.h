#pragma once
#include "CoreMinimal.h"
#include "OnHUDQuestFinalObjectiveHiddenDelegate.generated.h"

class UFortQuestItem;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHUDQuestFinalObjectiveHidden, UFortQuestItem*, QuestItem);

