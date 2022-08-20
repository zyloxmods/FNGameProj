#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EStimType : uint8 
{
	Seen,
	MightHaveSeen,
	Hurt,
	Heard,
	Obstacle,
	Enemy,
	Unknown,
	Count,
	EStimType_MAX,
};
