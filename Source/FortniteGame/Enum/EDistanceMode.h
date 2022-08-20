#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EDistanceMode : uint8 
{
	DistItemGoalActorToContext,
	DistItemToItemGoalActor,
	EDistanceMode_MAX,
};
