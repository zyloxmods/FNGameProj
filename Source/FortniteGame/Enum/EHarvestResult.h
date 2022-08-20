#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EHarvestResult : uint8 
{
	InProgress,
	Success,
	Fail,
	EHarvestResult_MAX,
};
