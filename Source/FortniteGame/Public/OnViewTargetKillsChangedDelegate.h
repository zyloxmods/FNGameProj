#pragma once
#include "CoreMinimal.h"
#include "OnViewTargetKillsChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnViewTargetKillsChanged, int32, NewKills);

