#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EAthenaMutatorEvaluators : uint8 
{
	ForceOverride,
	Add,
	Multiply,
	EAthenaMutatorEvaluators_MAX,
};
