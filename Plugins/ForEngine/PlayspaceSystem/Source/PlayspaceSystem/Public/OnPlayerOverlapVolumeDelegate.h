#pragma once
#include "CoreMinimal.h"
#include "OnPlayerOverlapVolumeDelegate.generated.h"

class AGameplayVolume;
class APlayerState;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPlayerOverlapVolume, APlayerState*, PlayerState, AGameplayVolume*, Volume);

