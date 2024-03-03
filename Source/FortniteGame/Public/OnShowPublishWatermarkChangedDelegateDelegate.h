#pragma once
#include "CoreMinimal.h"
#include "OnShowPublishWatermarkChangedDelegateDelegate.generated.h"

class AFortMinigameSettingsBuilding;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnShowPublishWatermarkChangedDelegate, AFortMinigameSettingsBuilding*, MinigameSettingsBuilding, bool, bNewShowPublishWatermark);

