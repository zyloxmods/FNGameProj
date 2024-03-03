#pragma once
#include "CoreMinimal.h"
#include "ReplicationGraph.h"
#include "ReplicationGraphNode_FortVolumeGrid.generated.h"

class AFortVolume;
class UReplicationGraphNode_FortVolumeGlobalRelevancyNode;
class UReplicationGraphNode_GridSpatialization2D;

UCLASS(Blueprintable, NonTransient)
class UReplicationGraphNode_FortVolumeGrid : public UReplicationGraphNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortVolume* FortVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UReplicationGraphNode_GridSpatialization2D* FortVolumeGrid2D;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UReplicationGraphNode_FortVolumeGlobalRelevancyNode* FortVolumeGlobalRelevancyNode;
    
public:
    UReplicationGraphNode_FortVolumeGrid();
private:
    UFUNCTION(BlueprintCallable)
    void HandleStreamedLevelUnloaded();
    
    UFUNCTION(BlueprintCallable)
    void HandleStreamedLevelShown();
    
    UFUNCTION(BlueprintCallable)
    void HandleStreamedLevelLoaded();
    
    UFUNCTION(BlueprintCallable)
    void HandleStreamedLevelHidden();
    
};

