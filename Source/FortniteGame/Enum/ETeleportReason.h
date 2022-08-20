#pragma once

#include "CoreMinimal.h"

UENUM()
enum class ETeleportReason : uint8 
{
	AgentDestinationNotOnNavMesh,
	AgentStuckInRepetitivePartialPaths,
	AgentBlocked,
	Unknown,
	ETeleportReason_MAX,
};
