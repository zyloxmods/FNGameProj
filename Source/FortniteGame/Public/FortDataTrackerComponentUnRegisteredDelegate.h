#pragma once
#include "CoreMinimal.h"
#include "FortDataTrackerComponentUnRegisteredDelegate.generated.h"

class UFortGameplayDataTrackerComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFortDataTrackerComponentUnRegistered, UFortGameplayDataTrackerComponent*, UnRegisteredDataTracker);

