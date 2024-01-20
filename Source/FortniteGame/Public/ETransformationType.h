#pragma once
#include "CoreMinimal.h"
#include "ETransformationType.generated.h"

UENUM(BlueprintType)
enum class ETransformationType : uint8 {
    Translation,
    Rotation,
    Scale,
    None,
};

