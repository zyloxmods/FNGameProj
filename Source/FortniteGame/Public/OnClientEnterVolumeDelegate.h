#pragma once
#include "CoreMinimal.h"
#include "OnClientEnterVolumeDelegate.generated.h"

class AFortVolume;
class APlayerState;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnClientEnterVolume, APlayerState*, Client, AFortVolume*, Volume);

