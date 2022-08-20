#pragma once

#include "CoreMinimal.h"

UENUM()
enum class ERespawnAndSpectateClientEventId : uint8 
{
	HideUI,
	ShowRespawnAvailableUI,
	MAX,
};
