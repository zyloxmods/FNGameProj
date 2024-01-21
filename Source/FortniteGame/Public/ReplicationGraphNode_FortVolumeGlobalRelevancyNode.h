#pragma once
#include "CoreMinimal.h"
#include "ReplicationGraph.h"
#include "ReplicationGraphNode_FortVolumeGlobalRelevancyNode.generated.h"

class UReplicationGraphNode_ActorList;
class UReplicationGraphNode_DormancyNode;

UCLASS(Blueprintable, NonTransient)
class UReplicationGraphNode_FortVolumeGlobalRelevancyNode : public UReplicationGraphNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UReplicationGraphNode_ActorList* NeverDormantOrAwakeList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UReplicationGraphNode_DormancyNode* DormantNode;
    
public:
    UReplicationGraphNode_FortVolumeGlobalRelevancyNode();
};

