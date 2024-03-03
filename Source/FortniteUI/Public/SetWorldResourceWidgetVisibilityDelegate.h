#pragma once
#include "CoreMinimal.h"
#include "EFortResourceType.h"
#include "SetWorldResourceWidgetVisibilityDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSetWorldResourceWidgetVisibility, const EFortResourceType, ResourceType, const bool, bVisible);

