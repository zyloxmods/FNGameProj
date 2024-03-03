#pragma once
#include "CoreMinimal.h"
#include "EDefaultAnimationMode.generated.h"

UENUM(BlueprintType)
namespace EDefaultAnimationMode {
    enum Type {
        UseAnimationBlueprint,
        UseAnimationAsset,
        UseCustomMode,
    };
}

