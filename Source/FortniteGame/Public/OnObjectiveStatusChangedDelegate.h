#pragma once
#include "CoreMinimal.h"
#include "EFortObjectiveStatus.h"
#include "OnObjectiveStatusChangedDelegate.generated.h"

class AFortObjectiveBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnObjectiveStatusChanged, const AFortObjectiveBase*, Objective, EFortObjectiveStatus, NewStatus);

