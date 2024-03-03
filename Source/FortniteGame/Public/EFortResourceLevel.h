#pragma once
#include "CoreMinimal.h"
#include "EFortResourceLevel.generated.h"

UENUM(BlueprintType)
enum class EFortResourceLevel : uint8{
        First,
        Second,
        Third,
        Fourth,
        Fifth,
        Sixth,
        NumLevels,
        Invalid,
};


