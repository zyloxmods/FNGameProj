#pragma once
#include "CoreMinimal.h"
#include "ReplicationGraph.h"
#include "FortReplicationGraphNode_AlwaysRelevantHealthForTeam.generated.h"

class AFortTeamHealthInfo;

UCLASS(Blueprintable, NonTransient)
class UFortReplicationGraphNode_AlwaysRelevantHealthForTeam : public UReplicationGraphNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortTeamHealthInfo* FortTeamHealthInfo;
    
public:
    UFortReplicationGraphNode_AlwaysRelevantHealthForTeam();
};

