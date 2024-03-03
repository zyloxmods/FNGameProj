#pragma once
#include "CoreMinimal.h"
#include "OnClientExitVolumeDelegate.generated.h"

class AFortVolume;
class APlayerState;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnClientExitVolume, APlayerState*, Client, AFortVolume*, Volume);

