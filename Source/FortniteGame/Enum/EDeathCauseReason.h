#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EDeathCauseReason : uint8 
{
	SelfInflictedDBNO,
	Eliminated,
	EliminatedDBNO,
	EDeathCauseReason_MAX,
};
