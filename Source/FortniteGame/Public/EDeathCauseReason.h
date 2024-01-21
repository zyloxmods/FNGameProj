#pragma once
#include "CoreMinimal.h"
#include "EDeathCauseReason.generated.h"

UENUM(BlueprintType)
enum class EDeathCauseReason : uint8 {
    SelfInflicted,
    SelfInflictedDBNO,
    Eliminated,
    EliminatedDBNO,
};

