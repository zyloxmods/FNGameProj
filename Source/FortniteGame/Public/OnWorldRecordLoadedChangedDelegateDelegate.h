#pragma once
#include "CoreMinimal.h"
#include "OnWorldRecordLoadedChangedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnWorldRecordLoadedChangedDelegate, bool, NewWorldRecordLoaded);

