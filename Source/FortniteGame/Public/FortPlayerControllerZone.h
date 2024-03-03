#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/OnlineReplStructs.h"
#include "AttributeSet.h"
#include "EFortVoteType.h"
#include "ELeecherStatus.h"
#include "FortAbilitySystemInterface.h"
#include "FortPlayerControllerGameplay.h"
#include "FortPlayerDeathReport.h"
#include "FortPlayerScoreReport.h"
#include "FortVoteConfig.h"
#include "OnBeginSkydivingFromBusDelegate.h"
#include "OnPlayerStartedRespawnDelegate.h"
#include "OnPossessedPawnDiedDelegate.h"
#include "OnSkyDivingStateChangeDelegate.h"
#include "OnVehicleSeatTransitionTargetIndexChangeDelegate.h"
#include "FortPlayerControllerZone.generated.h"

class AActor;
class AController;
class AFortPlayerStateZone;
class APawn;
class IFortHUDTargetUnderReticleInterface;
class UFortHUDTargetUnderReticleInterface;
class UInputComponent;

UCLASS(Blueprintable, MinimalAPI)
class AFortPlayerControllerZone : public AFortPlayerControllerGameplay/*, public IFortAbilitySystemInterface*/ {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSkyDivingStateChange OnBeginSkydiving;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSkyDivingStateChange OnEndSkydiving;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBeginSkydivingFromBus OnBeginSkydivingFromBus;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnVehicleSeatTransitionTargetIndexChange OnVehicleSeatTransitionTargetIndexChange;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerStartedRespawn OnStartedRespawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDontChangeReticleColorForEnemy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LastVehicleSeatSwitchTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APawn* PlayerToSpectateOnDeath;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSet<FGuid> GadgetTrackedAttributeItemInstanceIds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInputComponent* DeathInputComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInputComponent* RemoteControlledPawnInputComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFortPlayerDeathReport PlayerDeathReport;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bClientNotifiedOfPawnDied;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bEnterCameraModeOnDeath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    ELeecherStatus PlayerLeecherStatus;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPossessedPawnDied OnPossessedPawnDied;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TScriptInterface<IFortHUDTargetUnderReticleInterface> HUDTargetUnderReticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUniqueNetIdRepl> RejoinablePartyMembers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LastScoreEarnedTime;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 VehicleSeatTransitionTargetIndex;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_VoiceChatChannel, meta=(AllowPrivateAccess=true))
    FString VoiceChatChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_VoiceChatChannel, meta=(AllowPrivateAccess=true))
    uint8 VoiceChatChannelImplementation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<AActor*> DesyncNotifyList;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bJetpackExecuteToggle;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowMovementCancellableActionsWithIceFeet;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveForwardOnlyEmoteCancelBackwardsThreshold;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveForwardOnlyEmoteCancelStrafeThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat MovementCancellableActionLeashLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector MovementCancellableActionLeashLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector MovementCancellableActionStartingLeashLocation;
    
public:
    AFortPlayerControllerZone();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, Exec)
    void TestVehicleVelocity(const FString& Command);
    
    UFUNCTION(BlueprintCallable)
    void SpectateOnDeath();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetVehicleHealth(float NewHealth);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerVoiceChatRequestJoinToken(const FString& ChannelName);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSubmitGameplayVote(EFortVoteType VoteType, int32 VoteDecision);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSpectatePlayerState(AFortPlayerStateZone* PlayerToSpectate, bool bAllowStateChange);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSpectateActor(AActor* NewViewTarget, bool bAllowStateChange);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetVehicleHealth(float NewHealth);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetShouldDisablePlayerTeleportingDuringMissionResults();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSendPartyJoinInfoToPlayer(const FUniqueNetIdRepl& RecipientId, const FString& JoinInfoStr);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSendLoadoutConfig(int32 LoadoutSeed, const TArray<uint8>& Loadout);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerRequestSeatChange(int32 TargetSeatIndex);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerRequestLoadoutRefresh();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerEndGameplayVote(EFortVoteType VoteType);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerDetachFromRemoteControlledPawn();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerDestroyFromRemoteControlledPawn();
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerBeginGameplayVote(EFortVoteType VoteType, FFortVoteConfig VoteConfig);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerAttemptExitVehicle();
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerActivateMission();
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void RewindVehicle(const FString& Command);
    
    UFUNCTION(BlueprintCallable)
    void ResurrectPlayer();
    
    UFUNCTION(BlueprintCallable)
    void RespawnPlayer();
    
    UFUNCTION(BlueprintCallable)
    void ResetExecuteJetpackToggle();
    
    UFUNCTION(BlueprintCallable)
    void PushDeathInputComponent();
    
    UFUNCTION(BlueprintCallable)
    void PopDeathInputComponent();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_VoiceChatChannel();
    
    UFUNCTION(BlueprintCallable, Exec)
    void KillAllVehicles(const FString& Command);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUsingAnonymousMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUsingAnonymousCharacterMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsClientNotifiedOfPawnDied() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetVehicleSeatTransitionTargetIndex() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void DumpPhysicsVehicleBuffer(const FString& Command);
    
protected:
    UFUNCTION(BlueprintCallable)
    void DisableRangedWeaponScopeFX();
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientVoiceChatSendJoinToken(bool bSuccess, const FString& Error, const FString& Token);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientUpdatePlaylistFlags(const TArray<uint8>& Buffer);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSendPartyJoinInfoToPlayer(const FString& JoinInfoStr);
    
    UFUNCTION(Client, Reliable)
    void ClientPresentGameplayVote(uint32 Payload);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientOnZoneEndScoreReports(const TArray<FFortPlayerScoreReport>& ScoreReports);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientOnPawnSpawned();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientOnPawnRevived(AController* EventInstigator);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientOnPawnDied(FFortPlayerDeathReport DeathReport);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientClearDeathNotification();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientAckLoadoutConfig(int32 LoadoutSeed);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AreResurrectionAndRespawnTimeRemainingValid() const;
    
    UFUNCTION(BlueprintCallable)
    void AllowLoadoutRefresh();
    
    
    // Fix for true pure virtual functions not being implemented
};

