#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EOstrichDetonationState : uint8 
{
	Detonate,
	SelfDestruct,
	Instant,
	EOstrichDetonationState_MAX,
};
