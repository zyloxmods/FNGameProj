#pragma once
#include "CoreMinimal.h"
#include "EFortDirectedMovementSpace.generated.h"

UENUM(BlueprintType)
namespace EFortDirectedMovementSpace {
    enum Type {
        WorldSpace,
        ActorLocRelative,
        ActorLocRotRelative,
        CameraRelative,
    };
}

