#pragma once
#include "CoreMinimal.h"
#include "EFortUIFeature.h"
#include "EFortUIFeatureState.h"
#include "EFortUIFeatureStateReason.h"
#include "UIFeatureStateChangedListenerDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_ThreeParams(FUIFeatureStateChangedListener, EFortUIFeature, ChangedFeature, EFortUIFeatureState, NewState, EFortUIFeatureStateReason, StateReason);

