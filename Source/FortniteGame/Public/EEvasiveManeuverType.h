#pragma once
#include "CoreMinimal.h"
#include "EEvasiveManeuverType.generated.h"

UENUM(BlueprintType)
enum class EEvasiveManeuverType : uint8 {
    Crouch,
    Dodge,
    Jump,
    None,
};

