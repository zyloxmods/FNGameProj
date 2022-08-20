#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortCustomMovement : uint8 
{
	Driving,
	Passenger,
	Parachuting,
	Skydiving,
	SkydiveFollowing,
	Hover,
	RemoteControl_Flying,
	Ziplining,
	ZipliningOnSpline,
	Ballooning,
	SurfaceSwimming,
	DBNOCarried,
	Floating,
	EFortCustomMovement_MAX,
};
