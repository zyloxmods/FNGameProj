#pragma once
#include "CoreMinimal.h"
#include "EFortItemCooldownType.h"
#include "OnCooldownStartedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnCooldownStarted, EFortItemCooldownType, CooldownType, float, CooldownDuration);

