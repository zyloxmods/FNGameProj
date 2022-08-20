#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EServerRestartReason : uint8 
{
	GracefulShutdown,
	BeaconJoinDelayRestart,
	Other,
	EServerRestartReason_MAX,
};
