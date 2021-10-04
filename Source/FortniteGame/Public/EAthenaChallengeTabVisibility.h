#pragma once

#include "CoreMinimal.h"
#include "Engine/UserDefinedEnum.h"

UENUM()
enum class EAthenaChallengeTabVisibility : uint8
{
	Hide                              = 0,
	ShowAlways                        = 1,
	EAthenaChallengeTabVisibility_MAX = 2
};