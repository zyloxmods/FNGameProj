#pragma once
#include "CoreMinimal.h"
#include "EFortEncounterPacingMode.generated.h"

UENUM(BlueprintType)
namespace EFortEncounterPacingMode {
    enum Type {
        SpawnPointsPercentageCurve,
        IntensityCurve,
        Burst,
        Fixed,
    };
}

