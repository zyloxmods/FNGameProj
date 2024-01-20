#pragma once
#include "CoreMinimal.h"
#include "ReplicationGraph.h"
#include "FortReplicationGraphNode_AlwaysRelevantForTeam.generated.h"

class AFortTeamPrivateInfo;

UCLASS(Blueprintable, NonTransient)
class UFortReplicationGraphNode_AlwaysRelevantForTeam : public UReplicationGraphNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortTeamPrivateInfo* FortTeamPrivateInfo;
    
public:
    UFortReplicationGraphNode_AlwaysRelevantForTeam();
};

