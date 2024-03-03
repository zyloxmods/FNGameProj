#pragma once
#include "CoreMinimal.h"
#include "FortStaticMeshActor.h"
#include "FortInstancedStaticMeshActor.generated.h"

UCLASS(Blueprintable)
class AFortInstancedStaticMeshActor : public AFortStaticMeshActor {
    GENERATED_BODY()
public:
    AFortInstancedStaticMeshActor();
};

