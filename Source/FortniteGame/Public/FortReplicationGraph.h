#pragma once
#include "CoreMinimal.h"
#include "ReplicationGraph.h"
#include "FortReplicationGraph.generated.h"

class AActor;
class UFortReplicationGraphNode_BroadcastSpectator;
class UReplicationGraphNode_ActorList;
class UReplicationGraphNode_FortVolumeGrid;
class UReplicationGraphNode_GridSpatialization2D;

UCLASS(Blueprintable, NonTransient)
class UFortReplicationGraph : public UReplicationGraph {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UClass*> AlwaysRelevantClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UReplicationGraphNode_GridSpatialization2D* RootGridNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UReplicationGraphNode_ActorList* AlwaysRelevantNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortReplicationGraphNode_BroadcastSpectator* BroadcastSpectatorRelevancyNode;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UReplicationGraphNode_FortVolumeGrid*> FortVolumeGrids;
    
public:
    UFortReplicationGraph();
    UFUNCTION(BlueprintCallable)
    void OnVehicleDestroyed(AActor* DestroyedVehicle);
    
    UFUNCTION(BlueprintCallable)
    void OnHighFrequencyPawnDestroyed(AActor* Pawn);
    
};

