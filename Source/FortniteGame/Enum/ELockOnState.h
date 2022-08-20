#pragma once

#include "CoreMinimal.h"

UENUM()
enum class ELockOnState : uint8 
{
	TargetAcquired,
	LockingOnToTarget,
	TargetLockedOn,
	Cooldown,
	COUNT,
	ELockOnState_MAX,
};
