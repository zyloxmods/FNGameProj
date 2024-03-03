#pragma once
#include "CoreMinimal.h"
#include "OnShowPublishWatermarkChangedDelegate.generated.h"

class AFortVolume;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnShowPublishWatermarkChanged, AFortVolume*, Volume, bool, bShowPublishWatermark);

