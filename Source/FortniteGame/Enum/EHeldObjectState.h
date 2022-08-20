#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EHeldObjectState : uint8 
{
	Held,
	Thrown,
	Placed,
	Dropped,
	HeldInVehicle,
	EHeldObjectState_MAX,
};
