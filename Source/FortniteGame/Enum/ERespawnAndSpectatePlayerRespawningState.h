#pragma once

#include "CoreMinimal.h"

UENUM()
enum class ERespawnAndSpectatePlayerRespawningState : uint8 
{
	WaitingOnTimer,
	WaitingOnPlayerSelection,
	WaitingOnClientReady,
	Respawning,
	RespawnFinishing,
	ERespawnAndSpectatePlayerRespawningState_MAX,
};
