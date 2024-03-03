#pragma once
#include "CoreMinimal.h"
#include "EFortItemCooldownType.h"
#include "OnCooldownUpdatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOnCooldownUpdated, EFortItemCooldownType, CooldownType, float, CooldownDuration, float, CooldownRemaining, float, CooldownPercentage);

