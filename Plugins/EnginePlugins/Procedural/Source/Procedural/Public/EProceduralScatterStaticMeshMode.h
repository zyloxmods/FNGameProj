#pragma once
#include "CoreMinimal.h"
#include "EProceduralScatterStaticMeshMode.generated.h"

UENUM(BlueprintType)
enum class EProceduralScatterStaticMeshMode : uint8 {
    FromStaticMesh,
    FromActor,
};

