#pragma once
#include "CoreMinimal.h"
#include "EFortWeaponReloadType.h"
#include "OnLocalReloadStartedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnLocalReloadStarted, float, ReloadTime, EFortWeaponReloadType, ReloadType);

