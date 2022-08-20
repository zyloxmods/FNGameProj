#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EAthenaGamePhaseStep : uint8 
{
	Setup,
	Warmup,
	GetReady,
	BusLocked,
	BusFlying,
	StormForming,
	StormHolding,
	StormShrinking,
	Countdown,
	FinalCountdown,
	EndGame,
	Count,
	EAthenaGamePhaseStep_MAX,
};
