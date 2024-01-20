#pragma once
#include "CoreMinimal.h"
#include "OnMessageItemDisplayStateChangeDelegate.generated.h"

class UFortUIMessageItemWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMessageItemDisplayStateChange, UFortUIMessageItemWidget*, MessageItem);

