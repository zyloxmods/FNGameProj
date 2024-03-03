#pragma once
#include "CoreMinimal.h"
#include "EOrientedConstructionBuildingType.generated.h"

UENUM(BlueprintType)
namespace EOrientedConstructionBuildingType {
    enum Type {
        WallX,
        WallY,
        Floor,
        StairsUpX,
        StairsUpY,
        StairsDownX,
        StairsDownY,
        Roof,
        BraceLeftX,
        BraceRightX,
        BraceLeftY,
        BraceRightY,
        WallWindowX,
        WallWindowY,
        Count,
    };
}

