#pragma once
#include "CoreMinimal.h"
#include "FortFocusedBuildingInfo.h"
#include "OnFocusedBuildingStateChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFocusedBuildingStateChanged, const FFortFocusedBuildingInfo&, FocusedBuildingInfo);

