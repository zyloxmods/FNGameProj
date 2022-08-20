#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EBarrierState : uint8 
{
	BarrierComingDown,
	BarrierDown,
	EBarrierState_MAX,
};
