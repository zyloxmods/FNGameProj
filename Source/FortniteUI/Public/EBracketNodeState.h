#pragma once
#include "CoreMinimal.h"
#include "EBracketNodeState.generated.h"

UENUM(BlueprintType)
enum class EBracketNodeState : uint8 {
    LocalTeam,
    EnemyTeam,
    Neutral,
};

