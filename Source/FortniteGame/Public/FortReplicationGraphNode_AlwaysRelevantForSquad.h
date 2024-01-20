#pragma once
#include "CoreMinimal.h"
#include "ReplicationGraph.h"
#include "FortReplicationGraphNode_AlwaysRelevantForSquad.generated.h"

class ABuildingGameplayActorSpawnChip;
class AFortPlayerStateAthena;

UCLASS(Blueprintable, NonTransient)
class UFortReplicationGraphNode_AlwaysRelevantForSquad : public UReplicationGraphNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AFortPlayerStateAthena*> PlayerStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ABuildingGameplayActorSpawnChip*> RebootCards;
    
    UFortReplicationGraphNode_AlwaysRelevantForSquad();
};

