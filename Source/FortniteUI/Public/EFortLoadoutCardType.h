#pragma once
#include "CoreMinimal.h"
#include "EFortLoadoutCardType.generated.h"

UENUM(BlueprintType)
enum class EFortLoadoutCardType : uint8 {
    Items,
    RandomTile,
    AddTile,
    AddPreviewItems,
    Blank,
};

