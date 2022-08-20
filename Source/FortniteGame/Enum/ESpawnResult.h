#pragma once

#include "CoreMinimal.h"

UENUM()
enum class ESpawnResult : uint8 
{
	Failure_NoLocationFound,
	Failure_NoActorClass,
	Failure_BadQueryData,
	ESpawnResult_MAX,
};
