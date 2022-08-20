#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EVehicleTrickType : uint8 
{
	RollIncrement,
	ReverseRollIncrement,
	YawIncrement,
	ReverseYawIncrement,
	PitchIncrement,
	ReversePitchIncrement,
	HeightIncrement,
	DistanceIncrement,
	AirTimeIncrement,
	ShoppingCart_Flying,
	ShoppingCart_Stooping,
	StartedLanding,
	FailedLanding,
	Cancelled,
	StuckLanding,
	Count,
	EVehicleTrickType_MAX,
};
