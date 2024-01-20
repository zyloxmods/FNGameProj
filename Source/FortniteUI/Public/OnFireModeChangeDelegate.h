#pragma once
#include "CoreMinimal.h"
#include "EFireModeType.h"
#include "OnFireModeChangeDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFireModeChange, EFireModeType, NewFireMode);

