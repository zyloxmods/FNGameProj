#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EGlobalWeatherState : uint8 
{
	Active,
	BlendingIn,
	BlendingOut,
	EGlobalWeatherState_MAX,
};
