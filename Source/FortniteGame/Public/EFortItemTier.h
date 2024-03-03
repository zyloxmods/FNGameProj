#pragma once
#include "CoreMinimal.h"
#include "EFortItemTier.generated.h"

UENUM(BlueprintType)
enum class EFortItemTier : uint8 {
    No_Tier,
    I,
    II,
    III,
    IV,
    V,
    VI,
    VII,
    VIII,
    IX,
    X,
    NumItemTierValues,
};

