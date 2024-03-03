#pragma once
#include "CoreMinimal.h"
#include "EVolumeValidityResult.generated.h"

UENUM(BlueprintType)
enum class EVolumeValidityResult : uint8 {
    Valid,
    Invalid,
};

