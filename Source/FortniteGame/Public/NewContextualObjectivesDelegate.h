#pragma once
#include "CoreMinimal.h"
#include "NewContextualObjectivesDelegate.generated.h"

class UFortQuestItem;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FNewContextualObjectives, const TArray<UFortQuestItem*>&, NewQuestItems);

