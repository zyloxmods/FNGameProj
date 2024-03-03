#pragma once
#include "CoreMinimal.h"
#include "OnShowPlacard_SetWidgetVisibilityDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnShowPlacard_SetWidgetVisibility, bool, bNewVisibility);

