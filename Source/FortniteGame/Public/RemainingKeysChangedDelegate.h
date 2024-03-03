#pragma once
#include "CoreMinimal.h"
#include "RemainingKeysChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRemainingKeysChanged, int32, RemainigKeys);

