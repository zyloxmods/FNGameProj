#pragma once
#include "CoreMinimal.h"
#include "EItemShopTileSize.generated.h"

UENUM(BlueprintType)
enum class EItemShopTileSize : uint8 {
    Mini,
    Small,
    Normal,
    DoubleWide,
    Max,
};

