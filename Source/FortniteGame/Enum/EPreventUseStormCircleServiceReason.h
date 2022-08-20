#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EPreventUseStormCircleServiceReason : uint8 
{
	AlreadyActive,
	StormLocationsAlreadyRevealed,
	None,
	EPreventUseStormCircleServiceReason_MAX,
};
