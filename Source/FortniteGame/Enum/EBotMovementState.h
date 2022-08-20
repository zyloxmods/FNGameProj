#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EBotMovementState : uint8 
{
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
	EBotMovementState_MAX,
};
