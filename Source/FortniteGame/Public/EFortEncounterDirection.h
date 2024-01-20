#pragma once
#include "CoreMinimal.h"
#include "EFortEncounterDirection.generated.h"

UENUM(BlueprintType)
namespace EFortEncounterDirection {
    enum Type {
        North,
        NorthEast,
        East,
        SouthEast,
        South,
        SouthWest,
        West,
        NorthWest,
        Max_None,
    };
}

