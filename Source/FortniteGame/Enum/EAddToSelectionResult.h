#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EAddToSelectionResult : uint8 
{
	Removed,
	AtLimit,
	None,
	EAddToSelectionResult_MAX,
};
