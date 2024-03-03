#pragma once
#include "CoreMinimal.h"
#include "OnCreativePreviewScreenshotActiveChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCreativePreviewScreenshotActiveChanged, bool, bActive);

