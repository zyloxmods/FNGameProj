#pragma once
#include "CoreMinimal.h"
#include "EFortDamageNumberType.generated.h"

UENUM(BlueprintType)
enum class EFortDamageNumberType : uint8 {
    None,
    Pawn,
    Building,
    Player,
    Shield,
    Score,
    DBNO,
};

