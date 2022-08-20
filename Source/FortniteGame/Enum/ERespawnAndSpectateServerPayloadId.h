#pragma once

#include "CoreMinimal.h"

UENUM()
enum class ERespawnAndSpectateServerPayloadId : uint8 
{
	RespawnTargetSelected,
	SpectateAndRespawnTargetSelected,
	ERespawnAndSpectateServerPayloadId_MAX,
};
