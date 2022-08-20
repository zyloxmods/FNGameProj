#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EPowerSlideState : uint8 
{
	Entering,
	InProgress,
	Exiting,
	EPowerSlideState_MAX,
};
