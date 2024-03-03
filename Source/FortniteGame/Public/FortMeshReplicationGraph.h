#pragma once
#include "CoreMinimal.h"
#include "MeshReplicationGraph.h"
#include "FortMeshReplicationGraph.generated.h"

class UFortMeshReplicationGraphNode_PawnList;

UCLASS(Blueprintable, NonTransient)
class UFortMeshReplicationGraph : public UMeshReplicationGraph {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortMeshReplicationGraphNode_PawnList* PawnListNode;
    
public:
    UFortMeshReplicationGraph();
};

