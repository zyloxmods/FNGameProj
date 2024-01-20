#pragma once
#include "CoreMinimal.h"
#include "OnWidgetSelectedDelegate.generated.h"

class UHUDLayoutToolPlacementWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnWidgetSelected, UHUDLayoutToolPlacementWidget*, SelectedWidget);

