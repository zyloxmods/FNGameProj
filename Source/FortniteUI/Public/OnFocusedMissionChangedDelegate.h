#pragma once
#include "CoreMinimal.h"
#include "OnFocusedMissionChangedDelegate.generated.h"

class AFortMission;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFocusedMissionChanged, AFortMission*, FocusedMission);

