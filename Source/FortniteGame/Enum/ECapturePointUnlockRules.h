#pragma once

#include "CoreMinimal.h"

UENUM()
enum class ECapturePointUnlockRules : uint8 
{
	MaintainState,
	ResetDeactivate,
	ECapturePointUnlockRules_MAX,
};
