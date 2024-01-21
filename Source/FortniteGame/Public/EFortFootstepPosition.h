#pragma once
#include "CoreMinimal.h"
#include "EFortFootstepPosition.generated.h"

UENUM(BlueprintType)
namespace EFortFootstepPosition {
    enum Type {
        Parallel,
        Above,
        Below,
        AboveOrBelowAndVisible,
        Max_None,
    };
}

