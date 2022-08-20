#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EThresholdRequirement : uint8 
{
	LessThanOrEqual,
	Equal,
	GreaterThan,
	GreaterThanOrEqual,
	EThresholdRequirement_MAX,
};
