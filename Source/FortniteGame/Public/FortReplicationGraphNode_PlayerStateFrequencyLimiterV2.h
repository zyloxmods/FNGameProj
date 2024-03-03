#pragma once
#include "CoreMinimal.h"
#include "ReplicationGraph.h"
#include "FortReplicationGraphNode_PlayerStateFrequencyLimiterV2.generated.h"

UCLASS(Blueprintable, NonTransient)
class UFortReplicationGraphNode_PlayerStateFrequencyLimiterV2 : public UReplicationGraphNode {
    GENERATED_BODY()
public:
    UFortReplicationGraphNode_PlayerStateFrequencyLimiterV2();
};

