#pragma once
#include "CoreMinimal.h"
#include "EFortStatValueDisplayType.generated.h"

UENUM(BlueprintType)
enum class EFortStatValueDisplayType : uint8 {
    BasicPaired,
    BasicSingle,
    Unique,
    ElementalFire,
    ElementalIce,
    ElementalElectric,
};

