#pragma once
#include "CoreMinimal.h"
#include "ELayoutPropertyType.generated.h"

UENUM(BlueprintType)
enum class ELayoutPropertyType : uint8 {
    PropertyType_Float,
    PropertyType_Integer,
    PropertyType_Bool,
    PropertyType_Rotator,
    PropertyType_MAX UMETA(Hidden),
};

