#pragma once
#include "CoreMinimal.h"
#include "OnClientVolumeRestrictionStateChangedDelegate.generated.h"

class AFortVolume;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnClientVolumeRestrictionStateChanged, AFortVolume*, Volume, bool, bRestrictionEnabled);

