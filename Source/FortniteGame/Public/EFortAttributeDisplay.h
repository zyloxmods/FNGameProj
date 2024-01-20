#pragma once
#include "CoreMinimal.h"
#include "EFortAttributeDisplay.generated.h"

UENUM(BlueprintType)
namespace EFortAttributeDisplay {
    enum Type {
        BasicInt,
        NegativeImpliesInfiniteInt,
        BasicFloat,
        NegativeImpliesInfiniteFloat,
        BasicString,
        NormalizedPercentage,
        StringArray,
        SlateBrush,
        DoNotDisplay,
        None_Max,
    };
}

