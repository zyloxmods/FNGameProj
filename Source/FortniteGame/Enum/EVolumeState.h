#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EVolumeState : uint8 
{
	ReadOnly,
	Initializing,
	Ready,
	EVolumeState_MAX,
};
