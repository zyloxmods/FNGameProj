#pragma once
#include "CoreMinimal.h"
#include "ReplicationGraph.h"
#include "MeshReplicationGraphNode_AlwaysRelevant_ForConnection.generated.h"

UCLASS(Blueprintable, NonTransient)
class MESHNETWORK_API UMeshReplicationGraphNode_AlwaysRelevant_ForConnection : public UReplicationGraphNode_ActorList {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAlwaysRelevantActorInfo> PastRelevantActors;
    
    UMeshReplicationGraphNode_AlwaysRelevant_ForConnection();
};

