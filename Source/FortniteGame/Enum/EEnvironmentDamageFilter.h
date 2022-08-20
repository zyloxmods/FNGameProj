#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EEnvironmentDamageFilter : uint8 
{
	PlayerBuiltOnly,
	All,
	EEnvironmentDamageFilter_MAX,
};
