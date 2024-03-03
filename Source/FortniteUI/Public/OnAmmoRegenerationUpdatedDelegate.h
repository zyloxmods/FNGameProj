#pragma once
#include "CoreMinimal.h"
#include "OnAmmoRegenerationUpdatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAmmoRegenerationUpdated, bool, bOutAmmoRegenAvailableState);

