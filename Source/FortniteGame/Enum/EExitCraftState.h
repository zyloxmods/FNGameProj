#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EExitCraftState : uint8 
{
	Spawned,
	Landed,
	SpawnBalloon,
	GettingIntoPosition,
	GettingIntoPosition_Simple,
	WaitingForPawns,
	Exiting,
	EExitCraftState_MAX,
};
