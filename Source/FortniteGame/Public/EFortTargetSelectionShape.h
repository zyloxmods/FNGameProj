#pragma once
#include "CoreMinimal.h"
#include "EFortTargetSelectionShape.generated.h"

UENUM(BlueprintType)
namespace EFortTargetSelectionShape {
    enum Type {
        Sphere,
        Cone,
        Box,
        Capsule,
        Line,
        Cylinder,
        Custom,
        CustomOnSource,
    };
}

