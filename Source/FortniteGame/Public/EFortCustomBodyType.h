#pragma once
#include "CoreMinimal.h"
#include "EFortCustomBodyType.generated.h"

UENUM(BlueprintType)
namespace EFortCustomBodyType {
    enum Type {
        NONE,
        Small,
        Medium,
        MediumAndSmall,
        Large,
        LargeAndSmall,
        LargeAndMedium,
        All,
        Deprecated,
    };
}

