#pragma once
#include "CoreMinimal.h"
#include "EFortWeaponType.generated.h"

UENUM(BlueprintType)
enum class EFortWeaponType : uint8 {
    None,
    RangedAny,
    Pistol,
    Shotgun,
    Rifle,
    SMG,
    Sniper,
    GrenadeLauncher,
    RocketLauncher,
    Bow,
    Minigun,
    LMG,
    BiplaneGun,
    MeleeAny,
    Harvesting,
    MAX,
};

