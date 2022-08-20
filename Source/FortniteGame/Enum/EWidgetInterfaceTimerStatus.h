#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EWidgetInterfaceTimerStatus : uint8 
{
	Active,
	Paused,
	Inactive,
	EWidgetInterfaceTimerStatus_MAX,
};
