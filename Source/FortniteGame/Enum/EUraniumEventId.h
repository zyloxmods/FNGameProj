#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EUraniumEventId : uint8 
{
	CartBecomesPushable,
	CheckPointReached,
	NearCheckPoint,
	NearFinalCheckPoint,
	TimeIsLow,
	TimeIsExtraLow,
	OvertimeStarted,
	RoundEnd_PushersWin,
	RoundEnd_DefendersWin,
	RoundStart,
	GameEnded_AllRoundsPlayed,
	GameEndedEarly_BlowOut,
	GameEndedEarly_OutNumbered,
	EUraniumEventId_MAX,
};
