#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EStatRecordingPeriod : uint8 
{
	Minute,
	AthenaSafeZonePhase,
	Life,
	Map,
	Campaign,
	Persistent,
	Max,
};
