#pragma once
#include "CoreMinimal.h"
#include "EActionBindingComparisonType.generated.h"

UENUM(BlueprintType)
enum class EActionBindingComparisonType : uint8 {
    NoneBound,
    AnyBound,
    AllBound,
};

