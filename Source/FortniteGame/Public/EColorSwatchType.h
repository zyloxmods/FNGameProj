#pragma once
#include "CoreMinimal.h"
#include "EColorSwatchType.generated.h"

UENUM(BlueprintType)
enum class EColorSwatchType : uint8 {
    EColorSwatchType_Skin,
    EColorSwatchType_Hair,
    EColorSwatchType_BodyAccessory,
    EColorSwatchType_Accessory,
    EColorSwatchType_NumTypes,
};

