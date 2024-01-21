#pragma once
#include "CoreMinimal.h"
#include "OnObjectiveIsVisibleChangedDelegate.generated.h"

class AFortObjectiveBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnObjectiveIsVisibleChanged, const AFortObjectiveBase*, Objective, bool, bNewVisibility);

