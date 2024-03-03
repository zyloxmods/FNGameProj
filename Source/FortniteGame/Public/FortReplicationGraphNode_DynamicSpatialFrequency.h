#pragma once
#include "CoreMinimal.h"
#include "ReplicationGraph.h"
#include "FortReplicationGraphNode_DynamicSpatialFrequency.generated.h"

UCLASS(Blueprintable, NonTransient)
class UFortReplicationGraphNode_DynamicSpatialFrequency : public UReplicationGraphNode_DynamicSpatialFrequency {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UReplicationGraphNode_DynamicSpatialFrequency* NonAINode;
    
public:
    UFortReplicationGraphNode_DynamicSpatialFrequency();
};

