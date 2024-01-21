#pragma once
#include "CoreMinimal.h"
#include "EFortWeaponReloadType.generated.h"

UENUM(BlueprintType)
enum class EFortWeaponReloadType : uint8 {
    ReloadWholeClip,
    ReloadIndividualBullets,
    ReloadBasedOnAmmoCostPerFire,
    ReloadBasedOnCartridgePerFire,
};

