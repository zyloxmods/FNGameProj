#pragma once
#include "CoreMinimal.h"
#include "EItemWrapMaterialType.generated.h"

UENUM(BlueprintType)
enum class EItemWrapMaterialType : uint8 {
    WeaponWrap,
    VehicleWrap_Opaque,
    VehicleWrap_Masked,
};

