#pragma once
#include "CoreMinimal.h"
#include "FilterEnabledDelegateDelegate.generated.h"

class UObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FFilterEnabledDelegate, bool, bIsEnabled, UObject*, ListItemObject);

