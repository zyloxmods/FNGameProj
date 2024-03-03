#pragma once
#include "CoreMinimal.h"
#include "OnWorldInventoryChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnWorldInventoryChanged, bool, bIsAllowedToFly);

