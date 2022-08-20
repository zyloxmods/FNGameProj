#pragma once

#include "CoreMinimal.h"

UENUM()
enum class ETrustedPlatformType : uint8 
{
	Untrusted,
	PS4,
	PS5,
	XboxOne,
	Switch,
	ETrustedPlatformType_MAX,
};
