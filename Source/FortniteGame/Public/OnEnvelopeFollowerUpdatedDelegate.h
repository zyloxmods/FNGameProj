#pragma once
#include "CoreMinimal.h"
#include "OnEnvelopeFollowerUpdatedDelegate.generated.h"

class USoundSubmix;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnEnvelopeFollowerUpdated, USoundSubmix*, Submix, float, Amplitude);

