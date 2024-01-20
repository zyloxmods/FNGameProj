#pragma once
#include "CoreMinimal.h"
#include "EFortEncounterPacingState.generated.h"

UENUM(BlueprintType)
namespace EFortEncounterPacingState {
    enum Type {
        Ramp,
        Peak,
        Fade,
        Rest,
        Max_None,
    };
}

