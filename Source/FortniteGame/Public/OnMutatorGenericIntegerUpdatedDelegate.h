#pragma once
#include "CoreMinimal.h"
#include "OnMutatorGenericIntegerUpdatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnMutatorGenericIntegerUpdated, int32, GenericIntegerIndex, int32, NewIntegerValue);

