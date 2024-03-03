#pragma once
#include "CoreMinimal.h"
#include "EMapLocationStateType.generated.h"

UENUM(BlueprintType)
enum class EMapLocationStateType : uint8 {
    Normal,
    Golden,
    Undiscovered,
    Max,
};

