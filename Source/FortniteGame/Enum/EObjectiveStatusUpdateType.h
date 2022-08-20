#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EObjectiveStatusUpdateType : uint8 
{
	OnPercent,
	OnComplete,
	Never,
	EObjectiveStatusUpdateType_MAX,
};
