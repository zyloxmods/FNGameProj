#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EEndOfMatchReason : uint8 
{
	ScoreReached,
	TimeRanOut,
	WinEventOccurred,
	AllLoggedOut,
	AllEliminated,
	EEndOfMatchReason_MAX,
};
