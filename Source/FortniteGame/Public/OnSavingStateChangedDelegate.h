#pragma once
#include "CoreMinimal.h"
#include "OnSavingStateChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSavingStateChanged, bool, SaveActive);

