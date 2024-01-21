#pragma once
#include "CoreMinimal.h"
#include "ReplicationGraph.h"
#include "MeshReplicationGraph.generated.h"

class UReplicationGraphNode_ActorList;

UCLASS(Blueprintable, NonTransient)
class MESHNETWORK_API UMeshReplicationGraph : public UReplicationGraph {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UReplicationGraphNode_ActorList* AlwaysRelevantNode;
    
    UMeshReplicationGraph();
};

