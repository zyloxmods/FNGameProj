#pragma once
#include "CoreMinimal.h"
#include "ReplicationGraph.h"
#include "FortMeshReplicationGraphNode_PawnList.generated.h"

UCLASS(Blueprintable, NonTransient)
class UFortMeshReplicationGraphNode_PawnList : public UReplicationGraphNode_ActorList {
    GENERATED_BODY()
public:
    UFortMeshReplicationGraphNode_PawnList();
};

