#pragma once
#include "CoreMinimal.h"
#include "EFortEncounterState.generated.h"

UENUM(BlueprintType)
namespace EFortEncounterState {
    enum Type {
        Uninitialized,
        InitializingProperties,
        InitializingRiftManager,
        AwaitingActivation,
        Active,
        ReplacingRifts,
        Max_None,
    };
}

