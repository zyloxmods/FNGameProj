#pragma once
#include "CoreMinimal.h"
#include "EClampType.generated.h"

UENUM(BlueprintType)
enum class EClampType : uint8 {
    Minimum,
    Maximum,
};

