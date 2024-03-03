#pragma once
#include "CoreMinimal.h"
#include "ECreativeItemCategory.generated.h"

UENUM(BlueprintType)
enum class ECreativeItemCategory : uint8 {
    Prefabs,
    Devices,
    Weapons,
    Consumables,
    Gallery,
    None,
};

