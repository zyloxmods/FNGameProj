#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortMatchmakingPool : uint8 
{
	Desktop,
	PS4,
	XboxOne,
	Mobile,
	Test,
	Switch,
	Console,
	All,
	EFortMatchmakingPool_MAX,
};
