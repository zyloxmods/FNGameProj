#pragma once
#include "CoreMinimal.h"
#include "EFortCurieNativeFXType.generated.h"

UENUM(BlueprintType)
enum class EFortCurieNativeFXType : uint8 {
    None,
    Electricity,
    Fire,
    Charred = 0x4,
};

