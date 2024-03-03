#pragma once
#include "CoreMinimal.h"
#include "OnClientStartExitingVolumeDelegate.generated.h"

class AFortVolume;
class APlayerState;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnClientStartExitingVolume, APlayerState*, Client, AFortVolume*, Volume);

