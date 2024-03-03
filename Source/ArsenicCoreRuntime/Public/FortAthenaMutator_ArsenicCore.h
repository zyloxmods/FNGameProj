#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "FortAthenaMutator_GameModeBase.h"
#include "ItemAndCount.h"
#include "AttributeSet.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "ArsenicCoreHumanPawnData.h"
#include "ArsenicGameModeMutatorInterface.h"
#include "ArsenicOnGhostTeamWonDelegate.h"
#include "ArsenicOnLocalPlayerDiedAsHumanDelegate.h"
#include "ConsumePickupsManager.h"
#include "EArsenicCorePlayerStatus.h"
#include "Templates/SubclassOf.h"
#include "FortAthenaMutator_ArsenicCore.generated.h"

class AActor;
class AArsenicCorePopulationTracker;
class AArsenicCoreRespawnDrone;
class AController;
class AFortAthenaMutator_ConsumePickups;
class AFortPlayerPawnAthena;
class AFortPlayerStateAthena;
class UAmbientAudioDataAsset;
class UArsenicCorePlayerComponent;
class UAthenaSkyDiveContrailItemDefinition;
class UFortWeaponItemDefinition;
class UGameplayEffect;
class UPrimitiveComponent;
class UTexture2D;

UCLASS(Blueprintable, MinimalAPI)
class AFortAthenaMutator_ArsenicCore : public AFortAthenaMutator_GameModeBase, public IConsumePickupsManager, public IArsenicGameModeMutatorInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat bEnablePopulationTracker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat PopulationTrackerGridSpacing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat PopulationTrackerMaxGridUpdatesPerFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat bBotsUseOwnScreamData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat bBotsUsePlayerScreamData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat bBotsUseOtherBotsScreamData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat BotScreamDataShareRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat MaxBotScreamStimDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat BotChanceToIgnoreScreamStimFromPlayerScream;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat BotChanceToIgnoreScreamStimFromOtherBotScream;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat BotChanceToIgnoreScreamStimFromOwnScream;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat MaxNearbyGhostHumanRatioForBotScreamStim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat MaxNearbyPopulationForBotScreamStim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat BotScreamStimNearbyRadius;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UArsenicCorePlayerComponent> ArsenicCorePlayerComponentClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortAthenaMutator_ConsumePickups* ConsumePickupsMutator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat bAllowBotRespawnAsGhost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AArsenicCoreRespawnDrone> ArsenicCoreRespawnDroneClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat GhostRespawnHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat MinimumGhostRespawnDistanceFromStormShieldBorder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat DroneViewTargetBlendDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat PlayerRespawnCountdownTimerStartValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat BotRespawnTimerValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FItemAndCount> GhostItemList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAthenaSkyDiveContrailItemDefinition* GhostContrails;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor GhostHealthBarColorA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor GhostHealthBarColorB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor HumanHealthBarColorA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor HumanHealthBarColorB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat bShouldHideGhostShieldBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* GhostPortrait;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortWeaponItemDefinition* GhostWeaponItemDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag BotGhostPawnTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText VehiclePossessionContextText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UGameplayEffect>> PossessionGameplayEffectsForVehicle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag PossessionGameplayCueTagForVehicle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<AActor>> GhostInteractAllowedClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer GhostInteractDisallowedTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAmbientAudioDataAsset* AmbientAudioBank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AmbientAudioBankPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat bEnableBotRespawnControlSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat bBotRespawnControlSystem_UsePopulationTracker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat BotRespawnControlSystem_PopulationTrackerHumanGhostCountRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat BotRespawnControlSystem_DesiredRatioOfHumanToGhostThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_bTheGhostTeamHasWon, meta=(AllowPrivateAccess=true))
    bool bTheGhostTeamHasWon;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FArsenicOnGhostTeamWon ArsenicOnGhostTeamWon;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FArsenicOnLocalPlayerDiedAsHuman ArsenicOnLocalPlayerDiedAsHuman;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<AFortPlayerStateAthena*> GhostPlayerStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<FArsenicCoreHumanPawnData> HumanPlayerPawnDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AArsenicCorePopulationTracker* PopulationTracker;
    
public:
    AFortAthenaMutator_ArsenicCore();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION(BlueprintCallable)
    void UpdateAnalyticsDataOnPawnDied(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_bTheGhostTeamHasWon();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGhostThatPermaDiedTeam(uint8 TeamId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGhostTeam(uint8 TeamId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsALivingTeam(uint8 TeamId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasTheGhostTeamWon() const;
    
    UFUNCTION(BlueprintCallable)
    float GetPopulationInRadius(FVector CenterLocation, float Radius);
    
    UFUNCTION(BlueprintCallable)
    void GetPopulationAndGhostHumanRatioInRadius(FVector CenterLocation, float Radius, float& OutPopulation, float& OutGhostHumanRatio);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    uint8 GetGhostTeam(uint8 TeamId) const;
    
    UFUNCTION(BlueprintCallable)
    float GetGhostHumanRatioInRadius(FVector CenterLocation, float Radius);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    uint8 GetEliminatedPlayersTeamId() const;
    
    UFUNCTION(BlueprintCallable)
    void CreateGhostBotStimuliFromScream(AFortPlayerPawnAthena* ScreamerPawn, TArray<AFortPlayerPawnAthena*> RevealedHumans);
    
    
    // Fix for true pure virtual functions not being implemented
protected:
    UFUNCTION()
    void BroadcastArsenicOnPlayerStatusChange(const AFortPlayerStateAthena* PlayerState, EArsenicCorePlayerStatus PlayerStatus) override PURE_VIRTUAL(BroadcastArsenicOnPlayerStatusChange,);
    
};

