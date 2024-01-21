#pragma once
#include "CoreMinimal.h"
#include "EFortReplayEventType.generated.h"

UENUM(BlueprintType)
enum class EFortReplayEventType : uint8 {
    Elimination,
    Eliminated,
    DBNO,
    UserPlaced,
    MAX,
};

