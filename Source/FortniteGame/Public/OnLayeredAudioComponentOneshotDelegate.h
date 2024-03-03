#pragma once
#include "CoreMinimal.h"
#include "OnLayeredAudioComponentOneshotDelegate.generated.h"

class UAudioComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnLayeredAudioComponentOneshot, UAudioComponent*, AudioComponent, FName, ParameterName, int32, OneshotIndex);

