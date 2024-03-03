#pragma once
#include "CoreMinimal.h"
#include "OnCreativeQuickmenuEnabledChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCreativeQuickmenuEnabledChanged, bool, bIsEnabled);

