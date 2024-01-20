#pragma once
#include "CoreMinimal.h"
#include "XpBoostChangeDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FXpBoostChangeDelegate, int32, BoostAmount);

