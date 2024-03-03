#pragma once
#include "CoreMinimal.h"
#include "EFortResourceType.generated.h"

UENUM(BlueprintType)
enum class EFortResourceType : uint8
{
        Wood,
        Stone,
        Metal,
        Permanite,
        GoldCurrency,
        None,
    };


