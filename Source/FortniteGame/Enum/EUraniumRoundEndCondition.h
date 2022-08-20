#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EUraniumRoundEndCondition : uint8 
{
	RanOutOfTime_Or_LastCheckpointReached,
	RanOutOfTime_Or_MAX,
};
