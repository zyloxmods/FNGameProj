#pragma once
#include "CoreMinimal.h"
#include "OnUpdateUIDelegate.generated.h"

class AFortMissionState;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnUpdateUI, AFortMissionState*, MissionState);

