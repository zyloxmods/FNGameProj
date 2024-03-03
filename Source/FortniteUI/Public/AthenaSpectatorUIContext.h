#pragma once
#include "CoreMinimal.h"
#include "BlueprintContextBase.h"
#include "GameFramework/OnlineReplStructs.h"
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
private:
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
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<uint8, UAthenaRemoteSquadViewData*> GetSquadDataMap() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<FUniqueNetIdRepl, UAthenaRemotePlayerViewData*> GetPlayerDataMap() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAthenaRemotePlayerViewData* GetPlayerData(const FUniqueNetIdRepl PlayerUID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetPipMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAthenaRemotePlayerViewData* GetFollowedPlayerData() const;
    
};

