#pragma once
#include "CoreMinimal.h"
#include "ReplicationGraph.h"
#include "MeshReplicationGraphConnection.generated.h"

UCLASS(Blueprintable, NonTransient)
class MESHNETWORK_API UMeshReplicationGraphConnection : public UNetReplicationGraphConnection {
    GENERATED_BODY()
public:
    UMeshReplicationGraphConnection();
};

