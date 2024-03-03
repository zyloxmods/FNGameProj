#pragma once
#include "CoreMinimal.h"
#include "OnMediumSoundTriggeredDelegate.generated.h"

class UAudioComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnMediumSoundTriggered, UAudioComponent*, Sound, float, Intensity);

