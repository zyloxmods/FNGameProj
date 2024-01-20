#pragma once
#include "CoreMinimal.h"
#include "OnBuildPreviewMarkerVisibilityChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnBuildPreviewMarkerVisibilityChanged, const bool, bHidden);

