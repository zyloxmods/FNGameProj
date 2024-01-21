#pragma once
#include "CoreMinimal.h"
#include "OnRadialPickerStatusChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRadialPickerStatusChanged, bool, Opened);

