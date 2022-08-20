#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EVehicleFuelState : uint8 
{
	UsingVehicleFuel,
	NotUsingVehicleFuel,
	EVehicleFuelState_MAX,
};
