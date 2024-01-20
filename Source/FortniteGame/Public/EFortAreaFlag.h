#pragma once
#include "CoreMinimal.h"
#include "EFortAreaFlag.generated.h"

UENUM(BlueprintType)
namespace EFortAreaFlag {
    enum Type {
        Default,
        Obstacle,
        Smashable,
        Unwalkable,
        Interactable,
    };
}

