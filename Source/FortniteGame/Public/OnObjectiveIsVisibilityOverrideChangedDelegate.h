#pragma once
#include "CoreMinimal.h"
#include "EFortMissionVisibilityOverride.h"
#include "OnObjectiveIsVisibilityOverrideChangedDelegate.generated.h"

class AFortObjectiveBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnObjectiveIsVisibilityOverrideChanged, const AFortObjectiveBase*, Objective, EFortMissionVisibilityOverride, NewVisibilityOverride);

