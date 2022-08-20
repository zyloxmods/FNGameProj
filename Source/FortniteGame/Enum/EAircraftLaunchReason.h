#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EAircraftLaunchReason : uint8 
{
	EarlyTimerAllPlayers,
	StdTimerMostPlayers,
	EarlyTimerMostPlayers,
	StdTimerFewPlayers,
	EAircraftLaunchReason_MAX,
};
