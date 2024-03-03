#pragma once
#include "CoreMinimal.h"
#include "EMashPhase.generated.h"

UENUM(BlueprintType)
enum class EMashPhase : uint8{
        NotStarted,
        Preparation,
        Survival,
        AfterMath,
        Moving,
        FinalPhase,
        FinalPhaseFullStorm,
        MAX,
    };


