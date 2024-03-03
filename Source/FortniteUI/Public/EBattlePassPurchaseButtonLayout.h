#pragma once
#include "CoreMinimal.h"
#include "EBattlePassPurchaseButtonLayout.generated.h"

UENUM(BlueprintType)
enum class EBattlePassPurchaseButtonLayout : uint8 {
    Normal,
    Bundle,
    Normal_PaysForSelf,
};

