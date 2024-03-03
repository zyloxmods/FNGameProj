#pragma once
#include "CoreMinimal.h"
#include "EFortItemCooldownType.h"
#include "OnCooldownStoppedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCooldownStopped, EFortItemCooldownType, CooldownType);

