#pragma once
#include "CoreMinimal.h"
#include "EFortAutoMulchCategory.generated.h"

UENUM(BlueprintType)
enum class EFortAutoMulchCategory : uint8 {
    Invalid,
    Weapon,
    Trap,
    Survivor,
    Defender,
    Hero,
    Num,
};

