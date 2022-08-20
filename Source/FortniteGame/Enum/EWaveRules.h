#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EWaveRules : uint8 
{
	Timed,
	KillPoints,
	KillSpecificEnemy,
	Mission,
	EWaveRules_MAX,
};
