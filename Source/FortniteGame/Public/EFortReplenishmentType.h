#pragma once
#include "CoreMinimal.h"
#include "EFortReplenishmentType.generated.h"

UENUM(BlueprintType)
namespace EFortReplenishmentType {
    enum Type {
        Restricted,
        ClampMin,
        Add,
        Ability,
    };
}

