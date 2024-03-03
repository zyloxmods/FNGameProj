#pragma once
#include "CoreMinimal.h"
#include "OnCreativePlotLinkedVolumeChangedDelegate.generated.h"

class AFortVolume;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCreativePlotLinkedVolumeChanged, AFortVolume*, Volume);

