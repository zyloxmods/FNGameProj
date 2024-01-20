#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "OnMissionUIEventDelegate.generated.h"

class AFortMissionState;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnMissionUIEvent, AFortMissionState*, MissionState, const FGameplayTagContainer&, EventTags);

