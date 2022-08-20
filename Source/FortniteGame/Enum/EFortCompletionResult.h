#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortCompletionResult : uint8 
{
	Loss,
	Draw,
	Undefined,
	EFortCompletionResult_MAX,
};
