#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "UObject/NoExportTypes.h"
#include "Blueprint/IUserObjectListEntry.h"
#include "AthenaSpectatorPlayerWidgetBase.generated.h"

class AFortPlayerPawn;
class AFortPlayerStateAthena;
class UAthenaRemotePlayerViewData;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaSpectatorPlayerWidgetBase : public UCommonUserWidget, public IUserObjectListEntry {
    GENERATED_BODY()
public:
    UAthenaSpectatorPlayerWidgetBase();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetSquadIdsVisible(bool bSquadIdsVisible);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetPlayerData(UAthenaRemotePlayerViewData* InPlayerData, bool bForceUpdate);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTeamColorChanged(UAthenaRemotePlayerViewData* InPlayerData, FLinearColor InTeamColor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStormcapScoreChanged(UAthenaRemotePlayerViewData* InPlayerData, float InScore);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSquadIdChanged(UAthenaRemotePlayerViewData* InPlayerData, uint8 InSquadId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnShieldHealed(UAthenaRemotePlayerViewData* InPlayerData, float InShieldPercent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnShieldDamaged(UAthenaRemotePlayerViewData* InPlayerData, float InShieldPercent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerStateChanged(UAthenaRemotePlayerViewData* InPlayerData, AFortPlayerStateAthena* InPlayerState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerPawnChanged(UAthenaRemotePlayerViewData* InPlayerData, AFortPlayerPawn* InPlayerPawn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerNameChanged(UAthenaRemotePlayerViewData* InPlayerData, const FString& InPlayerName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerDataChanged(UAthenaRemotePlayerViewData* InPlayerData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlaceChanged(UAthenaRemotePlayerViewData* InPlayerData, int32 InPlace);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPipModeChanged(bool bPipModeEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMaterialCountChanged(UAthenaRemotePlayerViewData* InPlayerData, int32 InCount);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLocationChanged(UAthenaRemotePlayerViewData* InPlayerData, const FString& InLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnKillScoreChanged(UAthenaRemotePlayerViewData* InPlayerData, int32 InKillScore);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnIsReplayRelevancyPlayerChanged(UAthenaRemotePlayerViewData* InPlayerData, bool bInIsReplayRelevancyPlayer);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnIsInRelevancyChanged(UAthenaRemotePlayerViewData* InPlayerData, bool bInIsInRelevancy);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnIsFollowedPlayerChanged(UAthenaRemotePlayerViewData* InPlayerData, bool bInIsFollowedPlayer);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHealthHealed(UAthenaRemotePlayerViewData* InPlayerData, float InHealthPercent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHealthDamaged(UAthenaRemotePlayerViewData* InPlayerData, float InHealthPercent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDisconnectedChanged(UAthenaRemotePlayerViewData* InPlayerData, bool bIsDisconnected);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDeadStateChanged(UAthenaRemotePlayerViewData* InPlayerData, bool bIsDead);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDBNOStateChanged(UAthenaRemotePlayerViewData* InPlayerData, bool bIsDBNO);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBeingRevivedStateChanged(UAthenaRemotePlayerViewData* InPlayerData, bool bIsBeingRevived);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAthenaRemotePlayerViewData* GetPlayerData() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

