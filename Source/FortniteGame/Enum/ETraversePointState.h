#pragma once

#include "CoreMinimal.h"

UENUM()
enum class ETraversePointState : uint8 
{
	Hidden,
	Active,
	TouchedByPlayer,
	Finished,
	ETraversePointState_MAX,
};
