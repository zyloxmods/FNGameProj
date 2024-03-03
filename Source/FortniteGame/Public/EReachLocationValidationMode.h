#pragma once
#include "CoreMinimal.h"
#include "EReachLocationValidationMode.generated.h"

UENUM(BlueprintType)
enum class EReachLocationValidationMode : uint8 {
    None,
    Storm,
    Leash,
    SoftLeash,
};

