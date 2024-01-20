#pragma once
#include "CoreMinimal.h"
#include "EFortCustomBodyType.generated.h"

UENUM(BlueprintType)
enum class EFortCustomBodyType  : uint8{
        Small = 0x1,
        Medium,
        MediumAndSmall,
        Large,
        LargeAndSmall,
        LargeAndMedium,
        All,
        Deprecated,
    };

