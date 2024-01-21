#pragma once
#include "CoreMinimal.h"
#include "OnMashPhaseChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMashPhaseChanged, int32, NewPhase);

