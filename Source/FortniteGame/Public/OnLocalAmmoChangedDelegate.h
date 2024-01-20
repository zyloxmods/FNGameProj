#pragma once
#include "CoreMinimal.h"
#include "OnLocalAmmoChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnLocalAmmoChanged, int32, LocalCount, int32, LocalRemaining);

