#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortAbilityTargetSelectionUsage : uint8 
{
	OnlyTargeting,
	OnlyCanHit,
	EFortAbilityTargetSelectionUsage_MAX,
};
