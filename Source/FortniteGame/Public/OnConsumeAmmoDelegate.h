#pragma once
#include "CoreMinimal.h"
#include "OnConsumeAmmoDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnConsumeAmmo, int32, Quantity);

