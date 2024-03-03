#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "AthenaQuickChatActiveEntry.h"
#include "BuildingWeakSpotData.h"
#include "EFortResourceType.h"
#include "FortWorldMarkerData.h"
#include "MarkerID.h"
#include "Templates/SubclassOf.h"
#include "FortBroadcastRemoteClientInfo.generated.h"

class ABuildingSMActor;

UCLASS(Blueprintable)
class AFortBroadcastRemoteClientInfo : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_bActive, meta=(AllowPrivateAccess=true))
    bool bActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_RemoteIsInteracting, meta=(AllowPrivateAccess=true))
    bool bRemoteIsInteracting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_RemoteEditActor, meta=(AllowPrivateAccess=true))
    ABuildingSMActor* RemoteEditActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_RemoteEditTileData, meta=(AllowPrivateAccess=true))
    TArray<int32> RemoteEditTileData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_RemoteBuildableClass, meta=(AllowPrivateAccess=true))
    TSubclassOf<ABuildingSMActor> RemoteBuildableClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_RemoteBuildingMaterial, meta=(AllowPrivateAccess=true))
    EFortResourceType RemoteBuildingMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_RemoteIsFullScreenMapActive, meta=(AllowPrivateAccess=true))
    bool bRemoteIsFullScreenMapActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_RemoteIsInventoryActive, meta=(AllowPrivateAccess=true))
    bool bRemoteIsInventoryActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_RemoteCanDBNORevive, meta=(AllowPrivateAccess=true))
    bool bRemoteCanDBNORevive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_RemoteChatEntry, meta=(AllowPrivateAccess=true))
    FAthenaQuickChatActiveEntry RemoteChatEntry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_RemoteWeakspotData, meta=(AllowPrivateAccess=true))
    FBuildingWeakSpotData RemoteWeakspotData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_RemoteRespawnTime, meta=(AllowPrivateAccess=true))
    float RemoteRespawnTime;
    
    UPROPERTY(EditAnywhere, ReplicatedUsing=OnRep_RemotePoiTagID, meta=(AllowPrivateAccess=true))
    int16 RemotePoiTagID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_RemoteEventScore, meta=(AllowPrivateAccess=true))
    int32 RemoteEventScore;
    
public:
    AFortBroadcastRemoteClientInfo();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetPlayerInventoryActive(bool bInventorypActive);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetPlayerInteracting(bool bInteracting);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetPlayerHitMarkers(const TArray<FVector2D>& RelativeScreenPositions);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetPlayerFullScreenMapActive(bool bFullscreenMapActive);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetPlayerEventScore(int32 EventScore);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetPlayerEditTileData(const TArray<int32>& EditTileData);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetPlayerCanDBNORevive(bool bCanDBNORevive);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetPlayerBuildingMaterial(EFortResourceType Material);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetPlayerBuildableClass(TSubclassOf<ABuildingSMActor> BuildableClass);
    
    UFUNCTION(BlueprintCallable)
    void OnServerRespawnTimeChanged(float InRespawnTime);
    
    UFUNCTION(BlueprintCallable)
    void OnServerRemoveMapMarker(FMarkerID InMarkerID);
    
    UFUNCTION()
    void OnServerPoiTagIDChanged(int16 InPoiTagID);
    
    UFUNCTION(BlueprintCallable)
    void OnServerPlayerWeakspotSpawned(FBuildingWeakSpotData& WeakspotData);
    
    UFUNCTION(BlueprintCallable)
    void OnServerPlayerQuickChatEntryChanged(const FAthenaQuickChatActiveEntry& ChatEntry);
    
    UFUNCTION(BlueprintCallable)
    void OnServerPlayerEditActorChanged(ABuildingSMActor* EditActor);
    
    UFUNCTION(BlueprintCallable)
    void OnServerPlayerDamagedResourceBuilding(ABuildingSMActor* BuildingSMActor, EFortResourceType PotentialResourceType, int32 PotentialResourceCount, bool bDestroyed, bool bJustHitWeakspot);
    
    UFUNCTION(BlueprintCallable)
    void OnServerAddMapMarker(FFortWorldMarkerData InMarkerData);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_RemoteWeakspotData();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_RemoteRespawnTime();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_RemotePoiTagID();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_RemoteIsInventoryActive();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_RemoteIsInteracting();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_RemoteIsFullScreenMapActive();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_RemoteEventScore();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_RemoteEditTileData();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_RemoteEditActor();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_RemoteChatEntry();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_RemoteCanDBNORevive();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_RemoteBuildingMaterial();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_RemoteBuildableClass();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_bActive();
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerInventoryActiveChanged(bool bInventoryActive);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerInteractLongUseChanged(bool bInteracting, bool bLongUseInteractionCompleted);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerHitMarkersChanged(const TArray<FVector2D>& ScreenPositions);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerFullScreenMapActiveChanged(bool bFullscreenMapActive);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerEventScoreChanged(int32 EventScore);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerEditPreviewChanged(ABuildingSMActor* EditedActor);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerCanDBNOReviveChanged(bool bCanDBNORevive);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerBuildingMaterialChanged();
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerBuildableClassChanged();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void ClientRemotePlayerRemoveMapMarker(FMarkerID MarkerID);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void ClientRemotePlayerHitMarkers(const TArray<FVector2D>& RelativeScreenPositions);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void ClientRemotePlayerDamagedResourceBuilding(ABuildingSMActor* BuildingSMActor, EFortResourceType PotentialResourceType, int32 PotentialResourceCount, bool bDestroyed, bool bJustHitWeakspot);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void ClientRemotePlayerAddMapMarker(FFortWorldMarkerData InMarkerData);
    
};

