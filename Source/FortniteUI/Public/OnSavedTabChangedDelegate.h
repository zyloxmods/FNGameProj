#pragma once
#include "CoreMinimal.h"
#include "OnSavedTabChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSavedTabChanged, bool, IsTabSaved);

