#pragma once
#include "CoreMinimal.h"
#include "EFortMovementStyle.generated.h"

UENUM(BlueprintType)
enum class EFortMovementStyle : uint8
{
        Running,
        Walking,
        Charging,
        Sprinting,
        PersonalVehicle,
        Flying,
};

