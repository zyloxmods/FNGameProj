#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EMissionStormShieldState : uint8 
{
	GROWING,
	SHRINKING,
	MAX,
};
