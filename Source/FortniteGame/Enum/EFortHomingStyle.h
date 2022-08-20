#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortHomingStyle : uint8 
{
	LockOn,
	LaserTargeted,
	LaserTargeted_NoTrace,
	DrunkArtillery,
	EFortHomingStyle_MAX,
};
