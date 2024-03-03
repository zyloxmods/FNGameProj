#pragma once
#include "CoreMinimal.h"
#include "EManagedCosmeticType.generated.h"

UENUM(BlueprintType)
enum class EManagedCosmeticType : uint8 {
    Glider,
    GliderAnimSet,
    Pickaxe,
    Pet,
    ItemWrap,
    Charm,
    MAX_COUNT,
};

