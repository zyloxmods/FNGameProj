#pragma once
#include "CoreMinimal.h"
#include "MeshReplicationGraph.h"
#include "FortMeshReplicationGraph.generated.h"

UCLASS(Blueprintable, NonTransient)
class UFortMeshReplicationGraph : public UMeshReplicationGraph {
    GENERATED_BODY()
public:
    UFortMeshReplicationGraph();
};

