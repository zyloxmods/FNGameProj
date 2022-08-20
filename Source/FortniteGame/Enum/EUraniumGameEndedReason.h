#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EUraniumGameEndedReason : uint8 
{
	AllRoundsPlayed,
	EarlyGameEnd_BlowOut,
	EarlyGameEnd_OutNumbered,
	EUraniumGameEndedReason_MAX,
};
