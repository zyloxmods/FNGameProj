#pragma once
#include "CoreMinimal.h"
#include "WeaponEventDelegateDelegate.generated.h"

class AFortWeapon;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FWeaponEventDelegate, AFortWeapon*, Weapon);

