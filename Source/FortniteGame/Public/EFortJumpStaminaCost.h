#pragma once
#include "CoreMinimal.h"
#include "EFortJumpStaminaCost.generated.h"

UENUM(BlueprintType)
namespace EFortJumpStaminaCost {
    enum Type {
        None,
        Trigger,
        SprintTrigger,
        SprintAir,
    };
}

