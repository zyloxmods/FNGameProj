#pragma once
#include "CoreMinimal.h"
#include "OnQuestsGrantedDelegate.generated.h"

class UFortQuestItem;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnQuestsGranted, const TArray<UFortQuestItem*>&, Quests);

