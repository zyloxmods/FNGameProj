#pragma once
#include "CoreMinimal.h"
#include "OnDisplayDynamicQuestUpdateDelegate.generated.h"

class UFortQuestObjectiveInfo;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnDisplayDynamicQuestUpdate, const UFortQuestObjectiveInfo*, QuestObjective, bool, bDisplayStatusUpdate, bool, bDisplayAnnouncementUpdate);

