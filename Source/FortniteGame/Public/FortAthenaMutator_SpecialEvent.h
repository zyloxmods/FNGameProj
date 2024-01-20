#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "EAthenaGamePhaseStep.h"
#include "FortAthenaMutator.h"
#include "FortDelayRTMMData.h"
#include "OnAllPlayersSanitizedDelegate.h"
#include "OnSanitizedPawnsBroadcastDelegate.h"
#include "OnTeleportAllPlayersFinishedDelegate.h"
#include "FortAthenaMutator_SpecialEvent.generated.h"

UCLASS(Blueprintable)
class AFortAthenaMutator_SpecialEvent : public AFortAthenaMutator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTeleportAllPlayersFinished TeleportAllPlayersFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSanitizedPawnsBroadcast OnSantizedPawnsBroadcast;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAllPlayersSanitized OnAllPlayersSanitized;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_bPlayersAreInvincible, meta=(AllowPrivateAccess=true))
    bool bPlayersAreInvincible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_bDisableHUD, meta=(AllowPrivateAccess=true))
    bool bDisableHUD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_AllPlayerTeleportedCount, meta=(AllowPrivateAccess=true))
    int32 AllPlayerTeleportedCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_DelayPlayersFromReturningToLobbyData, meta=(AllowPrivateAccess=true))
    FFortDelayRTMMData DelayPlayersFromReturningToLobbyData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName NamedWeightForContainerLootRoll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float WeightForContainerLootRoll;
    
public:
    AFortAthenaMutator_SpecialEvent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void ToggleHUDs(bool bHide);
    
    UFUNCTION(BlueprintCallable)
    void ToggleDisableWeapons(bool bDisableWeapons);
    
    UFUNCTION(BlueprintCallable)
    void ToggleAllPlayersInvincibility(bool bInvincible);
    
    UFUNCTION(BlueprintCallable)
    void TeleportAllPlayers(FGameplayTagContainer EventTags, int32 TeleportsPerFrame);
    
    UFUNCTION(BlueprintCallable)
    void StartSafeZoneOverrideForEvent(int32 SafeZoneIndexForEvent);
    
    UFUNCTION(BlueprintCallable)
    void SetWeightForContainerLootRoll(const float Weight);
    
    UFUNCTION(BlueprintCallable)
    void SetNamedWeightForContainerLootRoll(const FName WeightName);
    
    UFUNCTION(BlueprintCallable)
    void ResetSafeZoneOverrideAfterEvent(int32 MinResetSafeZoneIndex, float MinDelayReturnToMainMenu, float MaxDelayReturnToMainMenu);
    
    UFUNCTION(BlueprintCallable)
    void RequestSanitizedPlayers(int32 NumPlayersRequested);
    
    UFUNCTION(BlueprintCallable)
    void PauseSupplyDrops(bool bPause);
    
    UFUNCTION(BlueprintCallable)
    void PauseStormProgression(bool bPause);
    
    UFUNCTION(BlueprintCallable)
    void PauseStormDamage(bool bPause);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_DelayPlayersFromReturningToLobbyData();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_bPlayersAreInvincible();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_bDisableHUD();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_AllPlayerTeleportedCount();
    
    UFUNCTION(BlueprintCallable)
    void OnGamePhaseStepChanged(EAthenaGamePhaseStep GamePhaseStep);
    
public:
    UFUNCTION(BlueprintCallable)
    void JumpToSafeZonePhase(FVector PawnSpawnCenterLocation, float PawnSpawnMinDistance, float PawnSpawnMaxDistance);
    
    UFUNCTION(BlueprintCallable)
    void ForceSafeZoneFinalLocation(FVector NewFinalLocation, float DefaultAircraftOffsetFromMidLine, float MinDefaultMidlineAngle, float MaxDefaultMidlineAngle);
    
};

