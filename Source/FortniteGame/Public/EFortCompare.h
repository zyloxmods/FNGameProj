#pragma once
#include "CoreMinimal.h"
#include "EFortCompare.generated.h"

UENUM(BlueprintType)
namespace EFortCompare {
    enum Type {
        EFC_LessThan,
        EFC_LessThanOrEqual,
        EFC_GreaterThan,
        EFC_GreaterThanOrEqual,
        EFC_Equals,
        EFC_MAX UMETA(Hidden),
    };
}

