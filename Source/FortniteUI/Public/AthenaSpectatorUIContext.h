#pragma once
#include "CoreMinimal.h"
#include "BlueprintContextBase.h"
#include "GameFramework/OnlineReplStructs.h"
#include "ESpectatorSquadIdMode.h"
#include "AthenaSpectatorUIContext.generated.h"

class AFortGameState;
class AFortPawn;
class AFortPlayerControllerSpectating;
class AFortPlayerState;
class AFortPlayerStateAthena;
class UAthenaRemotePlayerViewData;
class UAthenaRemoteSquadViewData;

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UAthenaSpectatorUIContext : public UBlueprintContextBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSquadDataDelegate, UAthenaRemoteSquadViewData*, SquadData);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerDataDelegate, UAthenaRemotePlayerViewData*, PlayerData);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerDataDelegate OnPlayerDataAdded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSquadDataDelegate OnSquadDataAdded;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FUniqueNetIdRepl, UAthenaRemotePlayerViewData*> PlayerDataMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<uint8, UAthenaRemoteSquadViewData*> SquadDataMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortPlayerControllerSpectating* SpectatingPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUniqueNetIdRepl FollowedPlayerUID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUniqueNetIdRepl ReplayRelevancyPlayerUID;
    
public:
    UAthenaSpectatorUIContext();
    UFUNCTION(BlueprintCallable)
    void SetSquadIdMode(ESpectatorSquadIdMode NewMode);
    
    UFUNCTION(BlueprintCallable)
    void SetNameplateTeamColorVisible(bool bVisible);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnSquadIdsInput(bool bShowSquadIds);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerStateAdded(AFortPlayerStateAthena* FPSA);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerControllerSet();
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerBecameRelevant(AFortPlayerState* FPS);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerBecameIrrelevant(AFortPlayerState* FPS);
    
    UFUNCTION(BlueprintCallable)
    void OnPawnForReplayRelevancyChanged(AFortPawn* InPawnForReplayRelevancy);
    
    UFUNCTION(BlueprintCallable)
    void OnGameStateSet(AFortGameState* InGameState);
    
    UFUNCTION(BlueprintCallable)
    void OnFollowedPlayerChanged(AFortPlayerControllerSpectating* SpectatorPC, AFortPlayerState* NewFollowedPlayer);
    
    UFUNCTION(BlueprintCallable)
    void OnCurrentPlaylistChanged();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetSquadIdsVisible() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESpectatorSquadIdMode GetSquadIdMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<uint8, UAthenaRemoteSquadViewData*> GetSquadDataMap() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<FUniqueNetIdRepl, UAthenaRemotePlayerViewData*> GetPlayerDataMap() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAthenaRemotePlayerViewData* GetPlayerData(const FUniqueNetIdRepl PlayerUID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetPipMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetNameplateTeamColorVisible() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAthenaRemotePlayerViewData* GetFollowedPlayerData() const;
    
};

