#pragma once
#include "CoreMinimal.h"
#include "EFortItemCooldownType.h"
#include "OnCooldownBookendDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCooldownBookend, EFortItemCooldownType, CooldownType);

