#pragma once
#include "CoreMinimal.h"
#include "EFortTargetingFXState.generated.h"

UENUM(BlueprintType)
namespace EFortTargetingFXState {
    enum Type {
        TargetingStart,
        TargetingEnd,
        Max_None,
    };
}

