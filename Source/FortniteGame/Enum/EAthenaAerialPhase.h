#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EAthenaAerialPhase : uint8 
{
	BusCantExit,
	BusCanExit,
	BusCanExitEndZebulonDrone,
	Skydiving,
	Parachuting,
	Falling,
	EAthenaAerialPhase_MAX,
};
