#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EItemUpgradeRestrictionReason : uint8 
{
	MaximumLevelAchieved,
	VaultOverflow,
	EItemUpgradeRestrictionReason_MAX,
};
