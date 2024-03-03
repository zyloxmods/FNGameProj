#pragma once
#include "CoreMinimal.h"
#include "EHealthBarType.generated.h"

UENUM(BlueprintType)
enum class EHealthBarType : uint8 {
    Health,
    Shield,
    Stamina,
    VehicleHealth,
    SignalInStorm,
};

