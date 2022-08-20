#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EContentRequestStatus : uint8 
{
	Active,
	Finished,
	EContentRequestStatus_MAX,
};
