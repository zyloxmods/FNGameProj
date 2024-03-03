#pragma once
#include "CoreMinimal.h"
#include "ReplicationGraph.h"
#include "FortAlwaysRelevantActorInfo.h"
#include "FortReplicationGraphNode_LiveSpectator.generated.h"

UCLASS(Blueprintable, NonTransient)
class UFortReplicationGraphNode_LiveSpectator : public UReplicationGraphNode_ActorList {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortAlwaysRelevantActorInfo> PastViewedTargets;
    
public:
    UFortReplicationGraphNode_LiveSpectator();
};

