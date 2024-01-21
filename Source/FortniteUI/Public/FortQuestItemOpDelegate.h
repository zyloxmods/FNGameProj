#pragma once
#include "CoreMinimal.h"
#include "FortQuestItemOpDelegate.generated.h"

class UFortQuestItem;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFortQuestItemOp, UFortQuestItem*, QuestItem);

