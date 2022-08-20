#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EPerceptionState : uint8 
{
	Threat_LKP,
	Threat_Alerted,
	ObstacleIncoming,
	ObstacleBlockedBy,
	ObstacleDetectedTrap,
	Unknown,
	Count,
	Threat_Count,
	EPerceptionState_MAX,
};
