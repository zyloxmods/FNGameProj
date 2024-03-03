#pragma once
#include "CoreMinimal.h"
#include "EFortFrontEndFeature.h"
#include "EFortFrontEndFeatureState.h"
#include "EFortFrontEndFeatureStateReason.h"
#include "FrontEndFeatureStateChangedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FFrontEndFeatureStateChangedDelegate, EFortFrontEndFeature, ChangedFeature, EFortFrontEndFeatureState, NewState, EFortFrontEndFeatureStateReason, Reason);

