#pragma once
#include "CoreMinimal.h"
#include "EFortConnectivityCubeFace.generated.h"

UENUM(BlueprintType)
namespace EFortConnectivityCubeFace {
    enum Type {
        Front,
        Left,
        Back,
        Right,
        Upper,
        Lower,
        MAX,
    };
}

