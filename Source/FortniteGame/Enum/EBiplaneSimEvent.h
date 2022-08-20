#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EBiplaneSimEvent : uint8 
{
	EngineStop,
	Takeoff,
	Landing,
	BoostBegin,
	BoostEnd,
	BoostChargeAboveThreshold,
	AileronRoll,
	ControlContextChange,
	EBiplaneSimEvent_MAX,
};
