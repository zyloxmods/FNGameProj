#pragma once
#include "CoreMinimal.h"
#include "EPlacementType.generated.h"

UENUM(BlueprintType)
namespace EPlacementType {
    enum Type {
        Free,
        Grid,
        None,
    };
}

