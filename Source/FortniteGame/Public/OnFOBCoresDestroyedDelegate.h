#pragma once
#include "CoreMinimal.h"
#include "OnFOBCoresDestroyedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFOBCoresDestroyed, uint8, Team);

