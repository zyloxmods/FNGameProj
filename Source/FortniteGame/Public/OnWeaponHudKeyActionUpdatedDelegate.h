#pragma once
#include "CoreMinimal.h"
#include "OnWeaponHudKeyActionUpdatedDelegate.generated.h"

class AFortWeapon;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnWeaponHudKeyActionUpdated, AFortWeapon*, Weapon);

