#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EManagedPickupContext : uint8 
{
	PlayerDropped,
	Overflow,
	Spawned,
	EManagedPickupContext_MAX,
};
