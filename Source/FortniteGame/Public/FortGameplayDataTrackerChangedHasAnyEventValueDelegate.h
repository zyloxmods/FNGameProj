#pragma once
#include "CoreMinimal.h"
#include "FortGameplayDataTrackerChangedHasAnyEventValueDelegate.generated.h"

class UFortGameplayDataTrackerComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FFortGameplayDataTrackerChangedHasAnyEventValue, UFortGameplayDataTrackerComponent*, DataTrackerComponent, bool, bHasEventValues);

