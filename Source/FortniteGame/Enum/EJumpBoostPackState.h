#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EJumpBoostPackState : uint8 
{
	Boost,
	Hovering,
	Falling,
	None,
	EJumpBoostPackState_MAX,
};
