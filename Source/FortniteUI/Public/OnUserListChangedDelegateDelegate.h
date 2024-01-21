#pragma once
#include "CoreMinimal.h"
#include "OnUserListChangedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnUserListChangedDelegate, bool, bOpen);

