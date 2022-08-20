#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EProjectileWaterHitBehavior : uint8 
{
	StopIfStopSimulatingOnHit,
	StopOnOverlap,
	EProjectileWaterHitBehavior_MAX,
};
