#pragma once
#include "CoreMinimal.h"
#include "EFortAutoMulchMode.generated.h"

UENUM(BlueprintType)
enum class EFortAutoMulchMode : uint8 {
    Off,
    Common,
    Uncommon,
    Rare,
    Epic,
    Num,
};

