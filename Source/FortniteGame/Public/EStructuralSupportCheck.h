#pragma once
#include "CoreMinimal.h"
#include "EStructuralSupportCheck.generated.h"

UENUM(BlueprintType)
enum class EStructuralSupportCheck : uint8 {
    Stable,
    Unstable,
    Max_None,
};

