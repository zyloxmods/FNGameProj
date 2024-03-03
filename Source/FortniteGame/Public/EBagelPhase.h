#pragma once
#include "CoreMinimal.h"
#include "EBagelPhase.generated.h"

UENUM(BlueprintType)
namespace EBagelPhase {
    enum Type {
        NotStarted,
        Preparation,
        Survival,
        AfterMath,
        Moving,
        FinalPhase,
        FinalPhaseFullStorm,
        MAX,
    };
}

