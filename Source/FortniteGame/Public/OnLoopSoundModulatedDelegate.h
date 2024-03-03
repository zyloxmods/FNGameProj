#pragma once
#include "CoreMinimal.h"
#include "OnLoopSoundModulatedDelegate.generated.h"

class UAudioComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnLoopSoundModulated, UAudioComponent*, Sound, float, Intensity);

