#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFreeFallingMode : uint8 
{
	Random,
	TowardNearestAlly,
	EFreeFallingMode_MAX,
};
