#pragma once
#include "CoreMinimal.h"
#include "ETagComparisonType.generated.h"

UENUM(BlueprintType)
enum class ETagComparisonType : uint8 {
    HasAny,
    HasAll,
    HasNone,
};

