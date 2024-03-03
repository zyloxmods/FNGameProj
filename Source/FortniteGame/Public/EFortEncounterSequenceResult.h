#pragma once
#include "CoreMinimal.h"
#include "EFortEncounterSequenceResult.generated.h"

UENUM(BlueprintType)
enum class EFortEncounterSequenceResult : uint8 {
    Success,
    FailedEncounterInProgress,
    Failed,
};

