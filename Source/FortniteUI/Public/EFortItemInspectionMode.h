#pragma once
#include "CoreMinimal.h"
#include "EFortItemInspectionMode.generated.h"

UENUM(BlueprintType)
enum class EFortItemInspectionMode : uint8 {
    Overview,
    Details,
    View,
    Evolution,
    Upgrade,
    UpgradeRarity,
    Promotion,
};

