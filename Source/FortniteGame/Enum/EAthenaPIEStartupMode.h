#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EAthenaPIEStartupMode : uint8 
{
	Warmup,
	WarmupPaused,
	Aircraft,
	AircraftPaused,
	Gameplay,
	EAthenaPIEStartupMode_MAX,
};
