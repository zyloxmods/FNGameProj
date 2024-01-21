#pragma once
#include "CoreMinimal.h"
#include "OnWidgetActivationChangedDynamicDelegate.generated.h"

class UCommonActivatablePanel;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnWidgetActivationChangedDynamic, UCommonActivatablePanel*, Panel);

