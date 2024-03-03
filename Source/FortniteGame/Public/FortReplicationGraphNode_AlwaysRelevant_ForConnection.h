#pragma once
#include "CoreMinimal.h"
#include "ReplicationGraph.h"
#include "FortAlwaysRelevantActorInfo.h"
#include "FortReplicationGraphNode_AlwaysRelevant_ForConnection.generated.h"

UCLASS(Blueprintable, NonTransient)
class UFortReplicationGraphNode_AlwaysRelevant_ForConnection : public UReplicationGraphNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortAlwaysRelevantActorInfo> PastRelevantActors;
    
public:
    UFortReplicationGraphNode_AlwaysRelevant_ForConnection();
};

