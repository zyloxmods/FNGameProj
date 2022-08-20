#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EVehicleTrickAxis : uint8 
{
	XNeg,
	Y,
	YNeg,
	Z,
	ZNeg,
	Count,
	EVehicleTrickAxis_MAX,
};
