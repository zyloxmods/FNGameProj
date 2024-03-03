#pragma once
#include "CoreMinimal.h"
#include "ESetCVarType.generated.h"

UENUM(BlueprintType)
enum class ESetCVarType : uint8 {
    Numeric,
    String,
};

