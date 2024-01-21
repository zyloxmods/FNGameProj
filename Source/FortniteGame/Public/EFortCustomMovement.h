#pragma once
#include "CoreMinimal.h"
#include "EFortCustomMovement.generated.h"

UENUM(BlueprintType)
namespace EFortCustomMovement {
    enum Type {
        Default,
        Driving,
        Passenger,
        Parachuting,
        Skydiving,
        Hover,
        RemoteControl_Flying,
        Ziplining,
        Ballooning,
    };
}

