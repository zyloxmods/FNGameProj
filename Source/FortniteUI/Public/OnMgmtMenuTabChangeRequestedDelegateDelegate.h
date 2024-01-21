#pragma once
#include "CoreMinimal.h"
#include "OnMgmtMenuTabChangeRequestedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMgmtMenuTabChangeRequestedDelegate, FName, TabName);

