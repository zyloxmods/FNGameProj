#pragma once
#include "CoreMinimal.h"
#include "ETeleportReason.generated.h"

UENUM(BlueprintType)
enum class ETeleportReason : uint8 {
    AgentNotOnNavmesh,
    AgentDestinationNotOnNavMesh,
    AgentStuckInRepetitivePartialPaths,
    AgentBlocked,
    Unknown,
};

