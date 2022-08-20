#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EChallengeScheduleUnlockType : uint8 
{
	OnScheduleGranted,
	DaysSinceEventStart,
	EChallengeScheduleUnlockType_MAX,
};
