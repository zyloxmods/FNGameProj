#pragma once
#include "CoreMinimal.h"
#include "OnAudioUpdateInAudibleRangeDelegate.generated.h"

class UAudioComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnAudioUpdateInAudibleRange, UAudioComponent*, AudioComponent, float, SplineInputKey);

