#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EExecutionStatus : uint8 
{
	ExecutionDenied,
	ExecutionSuccess,
	ExecutionPending,
	ExecutionAllowed,
	EExecutionStatus_MAX,
};
