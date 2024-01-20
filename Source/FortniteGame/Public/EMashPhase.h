#pragma once
#include "CoreMinimal.h"
#include "EMashPhase.generated.h"

UENUM(BlueprintType)
namespace EMashPhase {
    enum Type {
        NotStarted,
        Preparation,
        Survival,
        AfterMath,
        Moving,
        Ending,
        MAX,
    };
}

