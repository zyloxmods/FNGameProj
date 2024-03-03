#pragma once
#include "CoreMinimal.h"
#include "EFortMovementStyle.generated.h"

UENUM(BlueprintType)
namespace EFortMovementStyle {
    enum Type {
        Running,
        Walking,
        Charging,
        Sprinting,
        PersonalVehicle,
        Flying,
        Tethered,
    };
}

