#pragma once

#include "CoreMinimal.h"

UENUM()
enum class ETimerOverrideSetting : uint8 
{
	ForceShow,
	ForceHide,
	ShowAtEnd,
	ETimerOverrideSetting_MAX,
};
