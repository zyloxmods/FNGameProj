#pragma once
#include "CoreMinimal.h"
#include "MeshReplicationGraphNode_AlwaysRelevant_ForConnection.h"
#include "FortReplicationGraphConnection.generated.h"

UCLASS(Blueprintable, NonTransient)
class UFortReplicationGraphConnection : public UNetReplicationGraphConnection {
    GENERATED_BODY()
public:
    UFortReplicationGraphConnection();
};

