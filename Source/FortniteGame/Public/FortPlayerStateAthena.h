#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/OnlineReplStructs.h"
#include "GameplayTagContainer.h"
#include "ChangeTeamInfo.h"
#include "DeathInfo.h"
#include "DetailedMetricInformation.h"
#include "EDeathCause.h"
#include "EMatchAbandonState.h"
#include "ETeamMemberState.h"
#include "EventTournamentIds.h"
#include "FortCreativeMessageDispatcherErrorMessage.h"
#include "FortMutatorContext.h"
#include "FortPlayerStateZone.h"
#include "FortRespawnData.h"
#include "FortResurrectionData.h"
#include "MutatorContext.h"
#include "OnMatchAbandonStateChangedDelegate.h"
#include "OnPlaceChangedDelegate.h"
#include "OnPointsAddedToScoreDelegate.h"
#include "OnTeamAverageDamageChangedDelegate.h"
#include "OnTeamIndexChangedDelegateDelegate.h"
#include "OnTeamPlacementChangedDelegate.h"
#include "OnTeamScoreChangedDelegate.h"
#include "SimpleMetricInformation.h"
#include "FortPlayerStateAthena.generated.h"

class AFortPlayerStateAthena;
class APlayerState;
class UAthenaGadgetItemDefinition;
class UTexture2D;

UCLASS(Blueprintable, MinimalAPI)
class AFortPlayerStateAthena : public AFortPlayerStateZone, public IFortMutatorContext {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnSimplePlayerMetricInformationUpdated, APlayerState*, Client, const FSimpleMetricInformation&, Information);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPlayerMetricInformationUpdated, APlayerState*, Client, const FDetailedMetricInformation&, Information);
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 PersonalLobbyAction;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortRespawnData RespawnData;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ReplicatedTeamMemberState, meta=(AllowPrivateAccess=true))
    ETeamMemberState ReplicatedTeamMemberState;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETeamMemberState TeamMemberState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TeamMemberStateRepTime;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTeamIndexChangedDelegate OnTeamIndexChangedDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasWonAGame;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_TeamKillScore, meta=(AllowPrivateAccess=true))
    int32 TeamKillScore;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<UAthenaGadgetItemDefinition*, int32> KillsWhileAthenaGadgetEquippedMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, float> DamageDealtToBigHealthProps;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_TeamIndex, meta=(AllowPrivateAccess=true))
    uint8 TeamIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_TeamScorePlacement, meta=(AllowPrivateAccess=true))
    int32 TeamScorePlacement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_TeamScore, meta=(AllowPrivateAccess=true))
    int32 TeamScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Place, meta=(AllowPrivateAccess=true))
    int32 Place;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Downs, meta=(AllowPrivateAccess=true))
    int32 DownScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Kills, meta=(AllowPrivateAccess=true))
    int32 KillScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SeasonLevelUIDisplay, meta=(AllowPrivateAccess=true))
    int32 SeasonLevelUIDisplay;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HumanKillScore;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AIKillCount;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_NumChestsOpened, meta=(AllowPrivateAccess=true))
    int32 NumChestsOpened;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_NumAmmoCansOpened, meta=(AllowPrivateAccess=true))
    int32 NumAmmoCansOpened;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_NumSupplyDropsOpened, meta=(AllowPrivateAccess=true))
    int32 NumSupplyDropsOpened;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_NumLlamasOpened, meta=(AllowPrivateAccess=true))
    int32 NumLlamasOpened;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_NumForagedItemsConsumed, meta=(AllowPrivateAccess=true))
    int32 NumForagedItemsConsumed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_NumMinutesAlive, meta=(AllowPrivateAccess=true))
    int32 NumMinutesAlive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_NumBronzeCoinsCollected, meta=(AllowPrivateAccess=true))
    int32 NumBronzeCoinsCollected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_NumSilverCoinsCollected, meta=(AllowPrivateAccess=true))
    int32 NumSilverCoinsCollected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_NumGoldCoinsCollected, meta=(AllowPrivateAccess=true))
    int32 NumGoldCoinsCollected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_TotalPlayerScore, meta=(AllowPrivateAccess=true))
    int32 TotalPlayerScore;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPointsAddedToScore PointsAddedToScore;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTeamScoreChanged TeamScoreChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTeamPlacementChanged TeamPlacementChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlaceChanged PlaceChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTeamAverageDamageChanged TeamAverageDamageChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMatchAbandonStateChanged MatchAbandonStateChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AFortPlayerStateAthena*> FriendsInSquad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AFortPlayerStateAthena*> FriendsInSquadAtPartnerCafe;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_StormSurgeEffectCount, meta=(AllowPrivateAccess=true))
    uint8 StormSurgeEffectCount;
    
    UPROPERTY(EditAnywhere, Transient, ReplicatedUsing=OnRep_TeamAverageDamageDealt, meta=(AllowPrivateAccess=true))
    uint16 TeamAverageDamageDealt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SquadId, meta=(AllowPrivateAccess=true))
    uint8 SquadId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ThankedBusDriver, meta=(AllowPrivateAccess=true))
    uint8 bThankedBusDriver: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_DidNotThankBusDriver, meta=(AllowPrivateAccess=true))
    uint8 bDidNotThankBusDriver: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    uint8 bUsingAnonymousMode: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    uint8 bUsingAnonymousCharacterMode: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FText PlayerNameCustomOverride;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsTalking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsMuted;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MetricInformation, meta=(AllowPrivateAccess=true))
    FDetailedMetricInformation MetricInformation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SimpleMetricInformation, meta=(AllowPrivateAccess=true))
    FSimpleMetricInformation SimpleMetricInformation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 SecondsAlive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 TimeOfPawnCreation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool bIsDisconnected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* GameModeIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_DeathInfo, meta=(AllowPrivateAccess=true))
    FDeathInfo DeathInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ChangeTeamInfo, meta=(AllowPrivateAccess=true))
    FChangeTeamInfo ChangeTeamInfo;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bResurrectionChipDisabled;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ResurrectionChipReplicated, meta=(AllowPrivateAccess=true))
    FFortResurrectionData ResurrectionChipAvailable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ResurrectingNow, meta=(AllowPrivateAccess=true))
    bool bResurrectingNow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_RebootCounter, meta=(AllowPrivateAccess=true))
    int32 RebootCounter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool bHoldsRebootVanLock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_MatchAbandonState, meta=(AllowPrivateAccess=true))
    EMatchAbandonState MatchAbandonState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsAnAthenaGameParticipant: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FUniqueNetIdRepl BotUniqueId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PreserveSquad, meta=(AllowPrivateAccess=true))
    bool bPreserveSquad;
    
public:
    AFortPlayerStateAthena();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    static EDeathCause ToDeathCause(const FGameplayTagContainer& InTags, bool bWasDBNO);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_TogglePreserveSquad();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetCanEditCreativeIsland(bool bCanEdit, const TArray<FString>& WhiteList);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_TotalPlayerScore();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ThankedBusDriver();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_TeamScorePlacement();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_TeamScore();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_TeamKillScore();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_TeamIndex(uint8 OldVal);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_TeamAverageDamageDealt();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_StormSurgeEffectCount();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SquadId();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SimpleMetricInformation();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SeasonLevelUIDisplay();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_ResurrectionChipReplicated();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ResurrectingNow(const bool bPreviousResurrectingNow);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_ReplicatedTeamMemberState();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_RebootCounter();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_PreserveSquad();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Place();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_NumSupplyDropsOpened();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_NumSilverCoinsCollected();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_NumMinutesAlive();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_NumLlamasOpened();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_NumGoldCoinsCollected();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_NumForagedItemsConsumed();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_NumChestsOpened();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_NumBronzeCoinsCollected();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_NumAmmoCansOpened();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_MetricInformation();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MatchAbandonState(const EMatchAbandonState PrevMatchAbandonState);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_Kills();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Downs();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_DidNotThankBusDriver();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_DeathInfo();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ChangeTeamInfo();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_AIKills();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSquadDead() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsResurrectionChipAvailable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsResurrectingNow() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInSquad() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDisconnected() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRemainingResurrectionChipExpirationTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLinearColor GetPinColor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDeathInfo GetDeathInfo() const;
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientReportTeamKill(int32 TeamKills);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientReportKill(const AFortPlayerStateAthena* Player);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientReportDBNO(const AFortPlayerStateAthena* Player);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientNotifyMatchEntered(const FEventTournamentIds& EventIds);
    
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void ClientAddKillFeedErrorMessage(const TArray<FFortCreativeMessageDispatcherErrorMessage>& ErrorMessages);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void Client_OnNewLevel(int32 NewLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanEditCreativeIsland() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanBeResurrected() const;
    
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION()
    void GetMutatorContext(FMutatorContext& MutatorContext) const override PURE_VIRTUAL(GetMutatorContext,);
    
};

