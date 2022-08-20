#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFCRP_LoopBehavior : uint8 
{
	PingPong,
	WrapAround,
	EFCRP_MAX,
};
