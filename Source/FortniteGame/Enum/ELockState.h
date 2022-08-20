#pragma once

#include "CoreMinimal.h"

UENUM()
enum class ELockState : uint8 
{
	UNLOCKED,
	LOCKED,
	ELockState_MAX,
};
