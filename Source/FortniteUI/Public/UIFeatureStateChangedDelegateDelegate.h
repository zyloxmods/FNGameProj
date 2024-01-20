#pragma once
#include "CoreMinimal.h"
#include "EFortUIFeature.h"
#include "EFortUIFeatureState.h"
#include "EFortUIFeatureStateReason.h"
#include "UIFeatureStateChangedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FUIFeatureStateChangedDelegate, EFortUIFeature, ChangedFeature, EFortUIFeatureState, NewState, EFortUIFeatureStateReason, StateReason);

