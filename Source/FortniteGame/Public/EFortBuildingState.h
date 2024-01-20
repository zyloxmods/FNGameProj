#pragma once
#include "CoreMinimal.h"
#include "EFortBuildingState.generated.h"

UENUM(BlueprintType)
namespace EFortBuildingState {
    enum Type {
        Placement,
        EditMode,
        None,
    };
}

