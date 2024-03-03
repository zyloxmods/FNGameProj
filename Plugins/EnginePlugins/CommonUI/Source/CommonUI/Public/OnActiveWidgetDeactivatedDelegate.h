#pragma once
#include "CoreMinimal.h"
#include "OnActiveWidgetDeactivatedDelegate.generated.h"

class UCommonActivatablePanel;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnActiveWidgetDeactivated, UCommonActivatablePanel*, DeactivatedWidget);

