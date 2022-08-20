#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EDebugVehicleFlags : uint8 
{
	Input,
	Shocks,
	Exits,
	Water,
	Wheels,
	Friction,
	AirControl,
	CenterOfMass,
	Gravity,
	Forces,
	Damage,
	Collisions,
	OrientationCorrection,
	BoundarySpline,
	Sleeping,
	Misc,
	LeanBreak,
	EDebugVehicleFlags_MAX,
};
