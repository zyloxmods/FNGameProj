#pragma once
#include "CoreMinimal.h"
#include "EFOBMode.generated.h"

UENUM(BlueprintType)
enum class EFOBMode : uint8 {
    Uninitialized,
    Creation,
    Deployment,
};

