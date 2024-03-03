#pragma once
#include "CoreMinimal.h"
#include "EFortCostInfoTypes.generated.h"

UENUM(BlueprintType)
namespace EFortCostInfoTypes {
    enum Type {
        Placement,
        Repair,
        Conversion,
        Ability,
        None,
    };
}

