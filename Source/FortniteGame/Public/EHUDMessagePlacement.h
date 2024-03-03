#pragma once
#include "CoreMinimal.h"
#include "EHUDMessagePlacement.generated.h"

UENUM(BlueprintType)
enum class EHUDMessagePlacement : uint8 {
    None,
    BottomCenter,
    TopCenter,
    CenterRight,
};

