#pragma once
#include "CoreMinimal.h"
#include "EFortDefenderSubtype.generated.h"

UENUM(BlueprintType)
enum class EFortDefenderSubtype : uint8 {
    AssaultRifle,
    Pistol,
    Melee,
    Sniper,
    Shotgun,
    Invalid,
};

