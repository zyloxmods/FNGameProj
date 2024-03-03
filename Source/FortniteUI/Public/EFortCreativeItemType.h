#pragma once
#include "CoreMinimal.h"
#include "EFortCreativeItemType.generated.h"

UENUM(BlueprintType)
enum class EFortCreativeItemType : uint8 {
    Chest,
    Item,
    Collection,
    SubItems,
};

