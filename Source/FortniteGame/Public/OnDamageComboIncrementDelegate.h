#pragma once
#include "CoreMinimal.h"
#include "OnDamageComboIncrementDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnDamageComboIncrement, int32, Count, int32, DamageTaken);

