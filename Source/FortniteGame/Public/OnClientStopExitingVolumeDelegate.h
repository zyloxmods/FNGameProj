#pragma once
#include "CoreMinimal.h"
#include "OnClientStopExitingVolumeDelegate.generated.h"

class AFortVolume;
class APlayerState;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnClientStopExitingVolume, APlayerState*, Client, AFortVolume*, Volume);

