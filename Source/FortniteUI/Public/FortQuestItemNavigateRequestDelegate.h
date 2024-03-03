#pragma once
#include "CoreMinimal.h"
#include "FortQuestItemNavigateRequestDelegate.generated.h"

class UFortQuestItem;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFortQuestItemNavigateRequest, UFortQuestItem*, QuestItem);

