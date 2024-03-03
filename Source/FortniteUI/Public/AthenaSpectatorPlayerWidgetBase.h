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
    UFUNCTION(BlueprintCallable)
    void SetPlayerData(UAthenaRemotePlayerViewData* InPlayerData, bool bForceUpdate);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTeamColorChanged(FLinearColor TeamColor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStormcapScoreChanged(float Score);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSquadIdVisibilityChanged(bool bVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSquadIdChanged(uint8 SquadId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnShieldHealed(float Shield, float ShieldMax);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnShieldDamaged(float Shield, float ShieldMax);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerStateChanged(AFortPlayerStateAthena* PlayerState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerPawnChanged(AFortPlayerPawn* PlayerPawn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerNameChanged(const FString& PlayerName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerDataChanged(UAthenaRemotePlayerViewData* InPlayerData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlaceChanged(int32 Place);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPipModeChanged(bool bPipModeEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMaterialCountChanged(int32 Count);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLocationChanged(const FString& Location);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnKillScoreChanged(int32 KillScore);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnIsReplayRelevancyPlayerChanged(bool bIsReplayRelevancyPlayer);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnIsInRelevancyChanged(bool bIsInRelevancy);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnIsFollowedPlayerChanged(bool bIsFollowedPlayer);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHealthHealed(float Health, float HealthMax);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHealthDamaged(float Health, float HealthMax);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEventScoreChanged(int32 EventScore);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDisconnectedChanged(bool bIsDisconnected);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDeadStateChanged(bool bIsDead);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDBNOStateChanged(bool bIsDBNO);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBeingRevivedStateChanged(bool bIsBeingRevived);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleTeamColorChanged(UAthenaRemotePlayerViewData* InPlayerData, FLinearColor TeamColor);
    
    UFUNCTION(BlueprintCallable)
    void HandleSquadIdChanged(UAthenaRemotePlayerViewData* InPlayerData, uint8 SquadId);
    
    UFUNCTION(BlueprintCallable)
    void HandleShieldHealed(UAthenaRemotePlayerViewData* InPlayerData, float Shield, float MaxShield);
    
    UFUNCTION(BlueprintCallable)
    void HandleShieldDamaged(UAthenaRemotePlayerViewData* InPlayerData, float Shield, float MaxShield);
    
    UFUNCTION(BlueprintCallable)
    void HandlePlayerStateChanged(UAthenaRemotePlayerViewData* InPlayerData, AFortPlayerStateAthena* PlayerState);
    
    UFUNCTION(BlueprintCallable)
    void HandlePlayerNameChanged(UAthenaRemotePlayerViewData* InPlayerData, const FString& PlayerName);
    
    UFUNCTION(BlueprintCallable)
    void HandlePlaceChanged(UAthenaRemotePlayerViewData* InPlayerData, int32 Place);
    
    UFUNCTION(BlueprintCallable)
    void HandleMaterialCountChanged(UAthenaRemotePlayerViewData* InPlayerData, int32 MaterialCount);
    
    UFUNCTION(BlueprintCallable)
    void HandleKillScoreChanged(UAthenaRemotePlayerViewData* InPlayerData, int32 KillScore);
    
    UFUNCTION(BlueprintCallable)
    void HandleIsReplayRelevancyPlayerChanged(UAthenaRemotePlayerViewData* InPlayerData, bool bIsReplayRelevancyPlayer);
    
    UFUNCTION(BlueprintCallable)
    void HandleIsInRelevancyChanged(UAthenaRemotePlayerViewData* InPlayerData, bool bIsInRelevancy);
    
    UFUNCTION(BlueprintCallable)
    void HandleIsFollowedPlayerChanged(UAthenaRemotePlayerViewData* InPlayerData, bool bIsFollowedPlayer);
    
    UFUNCTION(BlueprintCallable)
    void HandleHealthHealed(UAthenaRemotePlayerViewData* InPlayerData, float Health, float MaxHealth);
    
    UFUNCTION(BlueprintCallable)
    void HandleHealthDamaged(UAthenaRemotePlayerViewData* InPlayerData, float Health, float MaxHealth);
    
    UFUNCTION(BlueprintCallable)
    void HandleDisconnectedChanged(UAthenaRemotePlayerViewData* InPlayerData, bool bIsDisconnected);
    
    UFUNCTION(BlueprintCallable)
    void HandleDeadStateChanged(UAthenaRemotePlayerViewData* InPlayerData, bool bIsDead);
    
    UFUNCTION(BlueprintCallable)
    void HandleDBNOStateChanged(UAthenaRemotePlayerViewData* InPlayerData, bool bIsDBNO);
    
    UFUNCTION(BlueprintCallable)
    void HandleBeingRevivedStateChanged(UAthenaRemotePlayerViewData* InPlayerData, bool bIsBeingRevived);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAthenaRemotePlayerViewData* GetPlayerData() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

