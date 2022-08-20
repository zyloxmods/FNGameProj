#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortContextualReticleTypes : uint8 
{
	FCR_Upgrade,
	FCR_Repair,
	FCR_Locked,
	FCR_Placement,
	FCR_Edit,
	FCR_NoTarget,
	FCR_InProgress,
	FCR_None,
	FCR_MAX,
};
