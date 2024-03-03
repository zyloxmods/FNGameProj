#pragma once
#include "CoreMinimal.h"
#include "EBotMovementState.generated.h"

UENUM(BlueprintType)
enum class EBotMovementState : uint8 {
    None,
    InProgress,
    Failed_NoPathFound,
    Failed_Aborted,
    Failed_AgentOffNavmesh,
    Failed_GoalOffNavmesh,
    Failed_Blocked,
    Failed_OffPath,
    Failed_Falling,
    Success,
    Success_Partial,
};

