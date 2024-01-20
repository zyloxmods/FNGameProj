#pragma once
#include "CoreMinimal.h"
#include "EWaxMinimapDrawMode.generated.h"

UENUM(BlueprintType)
enum class EWaxMinimapDrawMode : uint8 {
    NoDrawing,
    DrawCloseAndMoveOrShoot,
    DrawMoveOrShoot,
    DrawAlways,
};

