#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EPathObstacleAction : uint8 
{
	Ignore,
	AbortMoveAsFailed,
	FinishMoveAsSucceeded,
	EPathObstacleAction_MAX,
};
