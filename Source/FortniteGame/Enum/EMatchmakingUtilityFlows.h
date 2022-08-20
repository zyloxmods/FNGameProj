#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EMatchmakingUtilityFlows : uint8 
{
	JoinMatchInProgress,
	SpectateMatch,
	Legacy,
	LinkCode,
	JoinEditingSession,
	Unselected,
	EMatchmakingUtilityFlows_MAX,
};
