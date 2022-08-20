#pragma once

#include "CoreMinimal.h"

UENUM()
enum class ESpectatorCameraType : uint8 
{
	DroneFree,
	Gameplay,
	ReverseShot,
	FollowShot,
	DroneFollow,
	DroneAttach,
	BattleMap,
	ARDrone,
	MAX,
};
