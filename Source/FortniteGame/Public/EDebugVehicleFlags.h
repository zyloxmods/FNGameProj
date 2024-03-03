#pragma once
#include "CoreMinimal.h"
#include "EDebugVehicleFlags.generated.h"

UENUM(BlueprintType)
namespace EDebugVehicleFlags {
    enum Type {
        Status,
        Input,
        Shocks,
        Exits,
        Water,
        Wheels,
        Friction,
        AirControl,
        CenterOfMass,
        Gravity,
        Forces,
        Damage,
        Collisions,
        OrientationCorrection,
        BoundarySpline,
        Sleeping,
        Misc,
        LeanBreak,
    };
}

