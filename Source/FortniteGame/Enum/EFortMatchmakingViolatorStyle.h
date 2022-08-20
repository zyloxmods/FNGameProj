#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortMatchmakingViolatorStyle : uint8 
{
	Basic,
	HighStakes,
	Showdown,
	EFortMatchmakingViolatorStyle_MAX,
};
