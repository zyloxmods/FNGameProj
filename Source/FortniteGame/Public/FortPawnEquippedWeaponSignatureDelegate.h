#pragma once
#include "CoreMinimal.h"
#include "FortPawnEquippedWeaponSignatureDelegate.generated.h"

class AFortWeapon;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FFortPawnEquippedWeaponSignature, AFortWeapon*, NewWeapon, AFortWeapon*, PrevWeapon);

