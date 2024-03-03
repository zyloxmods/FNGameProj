#pragma once
#include "CoreMinimal.h"
#include "OnVehicleAudioVoiceOneShotDelegate.generated.h"

class UAudioComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnVehicleAudioVoiceOneShot, UAudioComponent*, AudioComponent, int32, Index);

