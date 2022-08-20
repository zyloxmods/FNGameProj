#pragma once

#include "CoreMinimal.h"

UENUM()
enum class ETryExitVehicleBehavior : uint8 
{
	ForceOnBlocking,
	ForceAlways,
	ETryExitVehicleBehavior_MAX,
};
