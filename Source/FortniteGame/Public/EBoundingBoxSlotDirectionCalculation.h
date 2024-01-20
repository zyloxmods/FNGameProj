#pragma once
#include "CoreMinimal.h"
#include "EBoundingBoxSlotDirectionCalculation.generated.h"

UENUM(BlueprintType)
enum class EBoundingBoxSlotDirectionCalculation : uint8 {
    Auto,
    FaceWall,
    FaceAwayFromWall,
    FaceCenter,
};

