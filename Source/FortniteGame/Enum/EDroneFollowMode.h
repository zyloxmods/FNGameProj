#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EDroneFollowMode : uint8 
{
	ForceFacingLocation,
	ForceFacingFollowedPlayer,
	TetherToFollowedPlayer,
	MAX,
};
