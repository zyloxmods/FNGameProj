#pragma once
#include "CoreMinimal.h"
#include "ETrackPieceType.generated.h"

UENUM(BlueprintType)
enum class ETrackPieceType : uint8 {
    None,
    Straight,
    Turn,
    TShape,
    Cross,
    Max_None,
};

