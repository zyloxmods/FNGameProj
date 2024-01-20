#pragma once
#include "CoreMinimal.h"
#include "ESquadChangeType.generated.h"

UENUM(BlueprintType)
enum class ESquadChangeType : uint8 {
    JoinSquad,
    BenchSelf,
    UnbenchSelf,
    Swap,
    None,
};

