#pragma once
#include "CoreMinimal.h"
#include "EMapZoomingMode.generated.h"

UENUM(BlueprintType)
enum class EMapZoomingMode : uint8 {
    None,
    ZoomingIn,
    ZoomingOut,
};

