#pragma once
#include "CoreMinimal.h"
#include "OnCreativeSwapPhoneAndHarvestHoldChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCreativeSwapPhoneAndHarvestHoldChanged, bool, bIsSwapped);

