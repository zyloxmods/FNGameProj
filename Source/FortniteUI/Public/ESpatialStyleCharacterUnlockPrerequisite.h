#pragma once
#include "CoreMinimal.h"
#include "ESpatialStyleCharacterUnlockPrerequisite.generated.h"

UENUM(BlueprintType)
enum class ESpatialStyleCharacterUnlockPrerequisite : uint8 {
    BattlepassPurchase,
    BattlepassLevel,
};

