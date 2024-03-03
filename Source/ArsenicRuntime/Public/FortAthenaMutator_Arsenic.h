#pragma once
#include "CoreMinimal.h"
#include "ConsumePickupsManager.h"
#include "AthenaGameMessageData.h"
#include "FortAthenaMutator_GameModeBase.h"
#include "TagTeamInfoArray.h"
#include "AttributeSet.h"
#include "GameplayTagContainer.h"
#include "ArsenicPlayerDataArray.h"
#include "EArsenicGameMsgId.h"
#include "OnPlayerTeamRevealedDelegate.h"
#include "FortAthenaMutator_Arsenic.generated.h"

class AFortAthenaMutator_ArsenicInventoryOverride;
class AFortAthenaMutator_ConsumePickups;
class AFortPawn;
class AFortPlayerController;
class AFortPlayerStateAthena;
class USoundBase;

UCLASS(Blueprintable)
class ARSENICRUNTIME_API AFortAthenaMutator_Arsenic : public AFortAthenaMutator_GameModeBase, public IConsumePickupsManager {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerTeamRevealed OnPlayerTeamRevealedDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat InitialInfectedPct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat InfectedDamageToBuildingPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat InfectedDamageToStructuralBuildingPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FString Winner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bGameTimeExpired;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* HumanDeathSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EArsenicGameMsgId, FAthenaGameMessageData> GameMsgs_Infected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EArsenicGameMsgId, FAthenaGameMessageData> GameMsgs_Human;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat MinInitialVehicleFuelPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat MaxInitialVehicleFuelPercent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 HumanTeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 InfectedTeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FTagTeamInfoArray TagTeamInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FArsenicPlayerDataArray PlayerDataArray;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat bInfectedConsumePickups;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortAthenaMutator_ConsumePickups* ConsumePickupsMutator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortAthenaMutator_ArsenicInventoryOverride* CachedInventoryOverrideMutator;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool bCheatHeartbeatEnabled;
    
public:
    AFortAthenaMutator_Arsenic();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure=false)
    void RequestGameMessageOnServer(EArsenicGameMsgId MsgId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintPure=false)
    void RequestGameMessageOnClient(EArsenicGameMsgId MsgId) const;
    
    UFUNCTION(BlueprintCallable)
    void RefreshPlayerIndicators(AFortPlayerStateAthena* PlayerState);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnCurrentPlaylistLoaded(FName PlaylistName, const FGameplayTagContainer& PlaylistContainerTags);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlaylistDBNOEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayerTeamRevealed(const AFortPlayerStateAthena* PlayerState) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayerARevealedInfected(const AFortPlayerController* PC) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPawnAnInfected(const AFortPawn* Pawn) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHeartbeatEnabled() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    bool IsHealOverTimeEnabled() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    bool IsGrowlEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetWinner() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTimeRemaining() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetTeamPlayerCount(uint8 Team);
    
protected:
    UFUNCTION(BlueprintCallable)
    void EndGame(uint8 WinningTeam);
    
    
    // Fix for true pure virtual functions not being implemented
};

