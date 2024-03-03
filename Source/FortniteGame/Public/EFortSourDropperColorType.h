#pragma once
#include "CoreMinimal.h"
#include "EFortSourDropperColorType.generated.h"

UENUM(BlueprintType)
enum class EFortSourDropperColorType : uint8 {
    None,
    Bright,
    MidBright,
    MidDark,
    Dark,
};

