#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortMinigameState : uint8 
{
	Setup,
	Transitioning,
	WaitingForCameras,
	Warmup,
	InProgress,
	PostGameTimeDilation,
	PostRoundEnd,
	PostGameEnd,
	PostGameAbandon,
	PostGameReset,
	EFortMinigameState_MAX,
};
