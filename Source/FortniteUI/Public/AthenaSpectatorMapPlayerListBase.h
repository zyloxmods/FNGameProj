#pragma once
#include "CoreMinimal.h"
#include "AthenaSpectatorPlayerListBase.h"
#include "ESpectatorPlayerListSortMethod.h"
#include "AthenaSpectatorMapPlayerListBase.generated.h"

class UAthenaMapLayer;
class UAthenaRemotePlayerViewData;
class UObject;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaSpectatorMapPlayerListBase : public UAthenaSpectatorPlayerListBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaMapLayer* MapLayer;
    
    UAthenaSpectatorMapPlayerListBase();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetSquadIdsVisible_BP(bool bSquadIdsVisible);
    
private:
    UFUNCTION(BlueprintCallable)
    void SetSquadIdsVisible(bool bSquadIdsVisible);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnToggleOnlyShowMapPlayersActionExecuted(bool& bPassThrough);
    
    UFUNCTION(BlueprintCallable)
    void OnSortByStateActionExecuted(bool& bPassThrough);
    
    UFUNCTION(BlueprintCallable)
    void OnSortBySquadIdActionExecuted(bool& bPassThrough);
    
    UFUNCTION(BlueprintCallable)
    void OnSortByPlayerNameActionExecuted(bool& bPassThrough);
    
    UFUNCTION(BlueprintCallable)
    void OnSortByEliminationsActionExecuted(bool& bPassThrough);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnPlayerSquadIdChanged(UAthenaRemotePlayerViewData* InPlayerData, uint8 InSquadId);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerNameChanged(UAthenaRemotePlayerViewData* InPlayerData, const FString& InPlayerName);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerKillScoreChanged(UAthenaRemotePlayerViewData* InPlayerData, int32 InKillScore);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerIsInRelevancyChanged(UAthenaRemotePlayerViewData* InPlayerData, bool bInIsInRelevancy);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerEliminatedStateChanged(UAthenaRemotePlayerViewData* InPlayerData, bool bInIsEliminated);
    
    UFUNCTION(BlueprintCallable)
    void OnListItemClicked(UObject* Item);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESpectatorPlayerListSortMethod GetNextSortMethod() const;
    
};

