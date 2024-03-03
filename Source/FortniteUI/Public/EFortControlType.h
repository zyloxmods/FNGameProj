#pragma once
#include "CoreMinimal.h"
#include "EFortControlType.generated.h"

UENUM(BlueprintType)
enum class EFortControlType : uint8 {
    None,
    CameraAndMovement,
    Picking,
    COUNT,
};

