#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EDeployableBaseBuildingState : uint8 
{
	Built,
	Unoccupied,
	WaitingToBuild,
	Building,
	WaitingToDestroy,
	Destroying,
	WaitingToReset,
	Resetting,
	EDeployableBaseBuildingState_MAX,
};
