#pragma once
#include "CoreMinimal.h"
#include "EFortAbilityCostSource.generated.h"

UENUM(BlueprintType)
enum class EFortAbilityCostSource : uint8 {
    Stamina,
    Durability,
    AmmoMagazine,
    AmmoPrimary,
    Item,
};

