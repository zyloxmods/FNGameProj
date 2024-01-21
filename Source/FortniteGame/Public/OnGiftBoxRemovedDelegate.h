#pragma once
#include "CoreMinimal.h"
#include "OnGiftBoxRemovedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGiftBoxRemoved, bool, bSuccess);

