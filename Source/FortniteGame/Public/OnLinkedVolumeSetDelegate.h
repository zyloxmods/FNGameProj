#pragma once
#include "CoreMinimal.h"
#include "OnLinkedVolumeSetDelegate.generated.h"

class AFortVolume;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnLinkedVolumeSet, AFortVolume*, PreviousVolume, AFortVolume*, NewVolume);

