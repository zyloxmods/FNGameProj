#pragma once
#include "CoreMinimal.h"
#include "OnCreativeModeEnabledChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCreativeModeEnabledChanged, bool, bIsEnabled);

