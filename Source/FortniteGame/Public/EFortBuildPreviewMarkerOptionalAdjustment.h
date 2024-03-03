#pragma once
#include "CoreMinimal.h"
#include "EFortBuildPreviewMarkerOptionalAdjustment.generated.h"

UENUM(BlueprintType)
enum class EFortBuildPreviewMarkerOptionalAdjustment : uint8 {
    None,
    FreeWallPieceOnTop,
    FreeWallPieceOnBottom,
};

