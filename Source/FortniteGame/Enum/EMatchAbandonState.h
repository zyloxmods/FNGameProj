#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EMatchAbandonState : uint8 
{
	Joining,
	CanAbandon,
	TeamLocked,
	EMatchAbandonState_MAX,
};
