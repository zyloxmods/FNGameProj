#pragma once

#include "CoreMinimal.h"

UENUM()
enum class ESpawnMachineState : uint8 
{
	WaitingForUse,
	Active,
	Complete,
	OnCooldown,
	ESpawnMachineState_MAX,
};
