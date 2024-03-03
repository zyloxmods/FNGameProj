#pragma once
#include "CoreMinimal.h"
#include "ELoadoutVariantInsertType.generated.h"

UENUM(BlueprintType)
enum class ELoadoutVariantInsertType : uint8 {
    StartOfArray,
    EndOfArray,
};

