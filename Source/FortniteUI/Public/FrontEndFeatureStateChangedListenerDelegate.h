#pragma once
#include "CoreMinimal.h"
#include "EFortFrontEndFeature.h"
#include "EFortFrontEndFeatureState.h"
#include "EFortFrontEndFeatureStateReason.h"
#include "FrontEndFeatureStateChangedListenerDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_ThreeParams(FFrontEndFeatureStateChangedListener, EFortFrontEndFeature, ChangedFeature, EFortFrontEndFeatureState, NewState, EFortFrontEndFeatureStateReason, Reason);

