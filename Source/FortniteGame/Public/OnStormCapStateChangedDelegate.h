#pragma once
#include "CoreMinimal.h"
#include "EAthenaStormCapState.h"
#include "OnStormCapStateChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnStormCapStateChanged, EAthenaStormCapState, StormCapState);

