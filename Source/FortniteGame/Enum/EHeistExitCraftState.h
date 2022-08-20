#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EHeistExitCraftState : uint8 
{
	Incoming,
	Spawned,
	Exited,
	EHeistExitCraftState_MAX,
};
