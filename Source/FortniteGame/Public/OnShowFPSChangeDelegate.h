#pragma once
#include "CoreMinimal.h"
#include "OnShowFPSChangeDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnShowFPSChange, bool, bShowFPS);

