#pragma once
#include "CoreMinimal.h"
#include "EFortStoreState.h"
#include "StoreStateChangedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FStoreStateChangedDelegate, EFortStoreState, NewStoreState);

