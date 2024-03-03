#pragma once
#include "CoreMinimal.h"
#include "OnBagelPhaseChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnBagelPhaseChanged, int32, NewPhase);

