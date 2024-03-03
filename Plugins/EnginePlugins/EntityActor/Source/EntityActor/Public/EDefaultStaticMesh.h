#pragma once
#include "CoreMinimal.h"
#include "EDefaultStaticMesh.generated.h"

UENUM(BlueprintType)
namespace EDefaultStaticMesh {
    enum Type {
        Cube,
        Sphere,
        Cylinder,
        Cone,
        Plane,
    };
}

