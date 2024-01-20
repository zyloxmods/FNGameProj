#pragma once
#include "CoreMinimal.h"
#include "EFortAmmoType.generated.h"

UENUM(BlueprintType)
namespace EFortAmmoType {
    enum Type {
        Pistol,
        Shotgun,
        Assault,
        Sniper,
        Energy,
    };
}

