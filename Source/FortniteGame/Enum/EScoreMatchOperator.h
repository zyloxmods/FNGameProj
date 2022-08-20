#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EScoreMatchOperator : uint8 
{
	LessThan,
	LessThanOrEqual,
	Equal,
	GreaterThan,
	GreaterThanOrEqual,
	EScoreMatchOperator_MAX,
};
