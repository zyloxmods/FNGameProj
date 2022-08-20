#pragma once

#include "CoreMinimal.h"

UENUM()
enum class ESmoothProgressState : uint8 
{
	DisabledByForceProgress,
	DisabledByState,
	ESmoothProgressState_MAX,
};
