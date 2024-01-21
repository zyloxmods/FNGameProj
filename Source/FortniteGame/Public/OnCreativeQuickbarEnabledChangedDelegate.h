#pragma once
#include "CoreMinimal.h"
#include "OnCreativeQuickbarEnabledChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCreativeQuickbarEnabledChanged, bool, bIsEnabled);

