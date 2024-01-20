#pragma once
#include "CoreMinimal.h"
#include "EItemUpgradeRestrictionReason.generated.h"

UENUM(BlueprintType)
enum class EItemUpgradeRestrictionReason : uint8 {
    NoAdditionalLevels,
    MaximumLevelAchieved,
    VaultOverflow,
};

