#pragma once
#include "CoreMinimal.h"
#include "OnToggleFullscreenMapDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnToggleFullscreenMap, bool, bFullscreenMapVisible);

