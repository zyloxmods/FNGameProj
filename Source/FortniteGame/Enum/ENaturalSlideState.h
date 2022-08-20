#pragma once

#include "CoreMinimal.h"

UENUM()
enum class ENaturalSlideState : uint8 
{
	Entering,
	InProgress,
	Exiting,
	ENaturalSlideState_MAX,
};
