#pragma once
#include "CoreMinimal.h"
#include "OnPreviewXPChangeDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPreviewXPChange, int32, XPChange);

