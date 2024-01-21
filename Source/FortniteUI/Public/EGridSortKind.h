#pragma once
#include "CoreMinimal.h"
#include "EGridSortKind.generated.h"

UENUM(BlueprintType)
enum class EGridSortKind : uint8 {
    None,
    ByNumber,
    ByString,
    ByNumberThenString,
    ByStringThenNumber,
};

