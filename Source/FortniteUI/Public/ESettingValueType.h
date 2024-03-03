#pragma once
#include "CoreMinimal.h"
#include "ESettingValueType.generated.h"

UENUM(BlueprintType)
enum class ESettingValueType : uint8 {
    None,
    Rotator,
    Slider,
};

