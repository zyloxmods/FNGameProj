#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortMatchmakingType : uint8 
{
	CriticalMission,
	QuickPlay,
	Session,
	EFortMatchmakingType_MAX,
};
