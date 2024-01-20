#pragma once
#include "CoreMinimal.h"
#include "OnAllFOBCoresAddedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAllFOBCoresAdded, uint8, Team);

