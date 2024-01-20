#pragma once
#include "CoreMinimal.h"
#include "EFortFrontendInventoryFilter.h"
#include "FortItemManagementScreenOpDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFortItemManagementScreenOp, EFortFrontendInventoryFilter, Filter);

