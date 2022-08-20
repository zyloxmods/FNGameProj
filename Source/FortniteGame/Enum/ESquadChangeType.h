#pragma once

#include "CoreMinimal.h"

UENUM()
enum class ESquadChangeType : uint8 
{
	BenchSelf,
	UnbenchSelf,
	Swap,
	None,
	ESquadChangeType_MAX,
};
