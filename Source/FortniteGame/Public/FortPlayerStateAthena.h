#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "DeathInfo.h"
#include "EDeathCause.h"
#include "ETeamMemberState.h"
#include "FortMutatorContext.h"
#include "FortPlayerStatePvP.h"
#include "FortRespawnData.h"
#include "FortResurrectionData.h"
#include "MutatorContext.h"
#include "OnPlaceChangedDelegate.h"
#include "OnPointsAddedToScoreDelegate.h"
#include "OnTeamAverageDamageChangedDelegate.h"
#include "OnTeamIndexChangedDelegateDelegate.h"
#include "OnTeamPlacementChangedDelegate.h"
#include "OnTeamScoreChangedDelegate.h"
#include "PlayerBannerInfo.h"
#include "FortPlayerStateAthena.generated.h"

class AFortPlayerStateAthena;
class UAthenaGadgetItemDefinition;
class UFortQuestItemDefinition;
class UTexture2D;

UCLASS(Blueprintable)
class FORTNITEGAME_API AFortPlayerStateAthena : public AFortPlayerStatePvP, public IFortMutatorContext {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 PersonalLobbyAction;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortRespawnData RespawnData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ReplicatedTeamMemberState, meta=(AllowPrivateAccess=true))
    ETeamMemberState ReplicatedTeamMemberState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETeamMemberState TeamMemberState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TeamMemberStateRepTime;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTeamIndexChangedDelegate OnTeamIndexChangedDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasWonAGame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_TeamKillScore, meta=(AllowPrivateAccess=true))
    int32 TeamKillScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<UAthenaGadgetItemDefinition*, int32> KillsWhileAthenaGadgetEquippedMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, float> DamageDealtToBigHealthProps;
    
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
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AIKillCount;
    
public:
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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 TotalPlayerScore;
    
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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AFortPlayerStateAthena*> FriendsInSquad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AFortPlayerStateAthena*> FriendsInSquadAtPartnerCafe;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSet<AFortPlayerStateAthena*> HostilePlayersDamaged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_StormSurgeEffectCount, meta=(AllowPrivateAccess=true))
    uint8 StormSurgeEffectCount;
    
    UPROPERTY(EditAnywhere, Transient, ReplicatedUsing=OnRep_TeamAverageDamageDealt, meta=(AllowPrivateAccess=true))
    uint16 TeamAverageDamageDealt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SquadId, meta=(AllowPrivateAccess=true))
    uint8 SquadId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_BannerInfo, meta=(AllowPrivateAccess=true))
    FPlayerBannerInfo Banner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ThankedBusDriver, meta=(AllowPrivateAccess=true))
    uint8 bThankedBusDriver: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    uint8 bInAircraft: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    uint8 bUsingAnonymousMode: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    uint8 bUsingAnonymousCharacterMode: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FText StreamerModeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsTalking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsMuted;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PartyAssistQuestId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortQuestItemDefinition* PartyAssistQuestTemplate;
    
private:
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
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ResurrectionChipReplicated, meta=(AllowPrivateAccess=true))
    FFortResurrectionData ResurrectionChipAvailable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ResurrectingNow, meta=(AllowPrivateAccess=true))
    bool bResurrectingNow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_RebootCounter, meta=(AllowPrivateAccess=true))
    int32 RebootCounter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool bHoldsRebootVanLock;
    
public:
    AFortPlayerStateAthena();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateMatchReportFromDeathInfoForPlayer();
    
public:
    UFUNCTION(BlueprintCallable)
    static EDeathCause ToDeathCause(const FGameplayTagContainer& InTags, bool bWasDBNO);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetInAircraft(bool bNewInAircraft);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetCanEditCreativeIsland(bool bCanEdit, const TArray<FString>& WhiteList);
    
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
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Kills();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Downs();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_DeathInfo();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_BannerInfo();
    
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
    void ClientNotifyMatchEntered(const FString& EventIds);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanEditCreativeIsland() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanBeResurrected() const;
    
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION()
    void GetMutatorContext(FMutatorContext& MutatorContext) const override PURE_VIRTUAL(GetMutatorContext,);
    
};

