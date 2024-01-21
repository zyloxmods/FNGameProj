#pragma once
#include "CoreMinimal.h"
#include "EVolumeState.h"
#include "OnVolumeStateChangedDelegate.generated.h"

class AFortVolume;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnVolumeStateChanged, EVolumeState, NewState, AFortVolume*, Volume);

