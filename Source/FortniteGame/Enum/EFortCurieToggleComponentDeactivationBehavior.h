#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortCurieToggleComponentDeactivationBehavior : uint8 
{
	TimedDeactivationAllowRefresh,
	TimedDeactivationNoRefresh,
	EFortCurieToggleComponentDeactivationBehavior_MAX,
};
