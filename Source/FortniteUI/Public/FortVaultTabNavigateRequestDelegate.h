#pragma once
#include "CoreMinimal.h"
#include "EFortInventoryFilter.h"
#include "FortVaultTabNavigateRequestDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFortVaultTabNavigateRequest, EFortInventoryFilter, VaultTab);

