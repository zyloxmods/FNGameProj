#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortCrucibleLeaderboardState : uint8 
{
	ReadyForQuery,
	WaitingForQueryResults,
	NeedsUserInfoQueried,
	Complete,
	EFortCrucibleLeaderboardState_MAX,
};
