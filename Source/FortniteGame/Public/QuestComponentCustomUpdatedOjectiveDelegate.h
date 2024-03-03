#pragma once
#include "CoreMinimal.h"
#include "QuestComponentCustomUpdatedOjectiveDelegate.generated.h"

class AFortPlayerController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FQuestComponentCustomUpdatedOjective, AFortPlayerController*, PlayerController, int32, AchievedCount, int32, RequiredCount);

