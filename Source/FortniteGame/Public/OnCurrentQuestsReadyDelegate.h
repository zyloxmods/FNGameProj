#pragma once
#include "CoreMinimal.h"
#include "OnCurrentQuestsReadyDelegate.generated.h"

class UFortQuestManager;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnCurrentQuestsReady, UFortQuestManager*, OwningQuestManager, bool, bFoundAllQuestsOnProfile);

