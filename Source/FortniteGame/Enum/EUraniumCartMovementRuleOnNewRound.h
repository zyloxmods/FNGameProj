#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EUraniumCartMovementRuleOnNewRound : uint8 
{
	MoveToNextCheckpoint,
	MoveToStartOfNewSpline,
	MoveToRandomCheckPointOfNewSpline,
	MoveToNextCheckPointOfNewSpline,
	EUraniumCartMovementRuleOnNewRound_MAX,
};
