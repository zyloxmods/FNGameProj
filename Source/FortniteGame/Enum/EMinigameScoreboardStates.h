#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EMinigameScoreboardStates : uint8 
{
	GameEndDisplayWinner,
	RoundEndDisplayScoreboard,
	GameEndDisplayScoreboard,
	Max,
};
