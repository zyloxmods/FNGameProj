#pragma once
#include "CoreMinimal.h"
#include "FortDataTrackerComponentRegisteredDelegate.generated.h"

class UFortGameplayDataTrackerComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFortDataTrackerComponentRegistered, UFortGameplayDataTrackerComponent*, RegisteredDataTracker);

