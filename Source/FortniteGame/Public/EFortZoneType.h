#pragma once
#include "CoreMinimal.h"
#include "EFortZoneType.generated.h"

UENUM(BlueprintType)
enum class EFortZoneType : uint8 {
    PVE,
    PVP,
    Keep,
    SingleZone,
    Max_None,
};

