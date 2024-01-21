#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Abilities/GameplayAbilityTypes.h"
#include "GameplayCueInterface.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "AthenaPawnReplayData.h"
#include "EAthenaGamePhaseStep.h"
#include "EBackpackType.h"
#include "EBodyPartVisibilityGrouping.h"
#include "FortEffectDistanceQuality.h"
#include "FortMutatorContext.h"
#include "FortPlayerAthenaAttributeReplicationProxy.h"
#include "FortPlayerPawn.h"
#include "MutatorContext.h"
#include "OnFootstepEventDelegate.h"
#include "OnFortPlayerDiedDelegate.h"
#include "OnInteractionFailedCallbackDelegate.h"
#include "OnUIGameplayCueEventDelegate.h"
#include "ReplicatedMontagePair.h"
#include "SharedRepMovement.h"
#include "FortPlayerPawnAthena.generated.h"

class AActor;
class ABuildingSMActor;
class AController;
class AFortVolume;
class APawn;
class UAudioComponent;
class UDataTable;
class UFortMobileInteractionComponent;
class UFortSignificanceManager;
class UParticleSystemComponent;
class USoundBase;
class UTexture2D;

UCLASS(Blueprintable, MinimalAPI, Config=Game)
class AFortPlayerPawnAthena : public AFortPlayerPawn, public IFortMutatorContext {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInteractionFailedCallback OnInteractionFailedCallback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    AActor* ItemInteractionActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentPawnSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentPawnSpeedXY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator CurrentPawnVelXYRot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector PreviousVelocityXY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* OnReviveSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReviveFromDBNOTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float DBNOStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DBNOInvulnerableTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 DBNORevivalStacking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bWasCrouchedBeforeDBNO;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FName ItemSpecialActorID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FGameplayTag ItemSpecialActorCategoryTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float BecameSpecialActorTime;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUIGameplayCueEvent OnUIGameplayCue;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlaytestWithNoMouse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_NetMovementPrioritized, meta=(AllowPrivateAccess=true))
    bool bNetMovementPrioritized;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CapsuleRadiusAthena, meta=(AllowPrivateAccess=true))
    float CapsuleRadiusAthena;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CapsuleHalfHeightAthena, meta=(AllowPrivateAccess=true))
    float CapsuleHalfHeightAthena;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MeshHeightAdjustAthena, meta=(AllowPrivateAccess=true))
    float MeshHeightAdjustAthena;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_AttributeProxy, meta=(AllowPrivateAccess=true))
    FFortPlayerAthenaAttributeReplicationProxy AttributeReplicationProxy;
    
    UPROPERTY(EditAnywhere, ReplicatedUsing=OnRep_ReplicatedAnimMontage, meta=(AllowPrivateAccess=true))
    FGameplayAbilityRepAnimMontage RepAnimMontageInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_RepAnimMontageStartSection, meta=(AllowPrivateAccess=true))
    int32 RepAnimMontageStartSection;
    
    UPROPERTY(EditAnywhere, ReplicatedUsing=OnRep_ReplayRepAnimMontageInfo, meta=(AllowPrivateAccess=true))
    FGameplayAbilityRepAnimMontage ReplayRepAnimMontageInfo;
    
    UPROPERTY(EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FMinimalGameplayCueReplicationProxy SimulatedProxyGameplayCues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FReplicatedMontagePair LandingMontagePair;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* CurrentQuickChatIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bADSWhileNotOnGround;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* DefaultCrouchedFootstepSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* DefaultCrouchSprintFootstepSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimumTimeBetweenSteps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LastStepTime;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFootstepEvent OnFootstepEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFortPlayerDied OnFortPlayerDied;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APawn* KillerForSpectatorRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsInWaterVolume, meta=(AllowPrivateAccess=true))
    bool bIsInWaterVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortEffectDistanceQuality DamageFXSignificance;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPlayerPawnReady;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector LastFiredLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector LastFiredDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LastFiredTime;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* PrototypeShootingModel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AController* FallInstigator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer FallDamageTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ABuildingSMActor* LastFloorBeforeFalling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LastFallDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MeleeCombatSlowSpeedMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MeleeCombatSlowDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FAthenaPawnReplayData EncryptedPawnReplayData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* InAirAudioComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* PSC_PlayerWalkLand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* PSC_PlayerRunLand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* PSC_PlayerSlideLand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* PSC_PlayerInWater;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAudioComponent* SlidingAudioComp;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UFortMobileInteractionComponent*> MobileInteractionComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor MinimapIconColorFiftyFiftyPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxIndicatorVisibilityDistForReplays;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* ConsumableUseAudio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InAirAudioScalar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InAirAudioInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InAirAudioPawnSpeedMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InAirAudioPawnSpeedMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFXPlayDustOnMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WalkDustActivateSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WalkDustResetSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RunParticleActivateSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* SlidingIntensitySound3P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* SlidingIntensitySound1P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float SlideAudioIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LastHealthPostProcessWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HealthPostProcessStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HealthPostProcessMuteTime;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortSignificanceManager* FortSignificanceManager;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_bIsCreativeGhostModeActivated, meta=(AllowPrivateAccess=true))
    bool bIsCreativeGhostModeActivated;
    
    AFortPlayerPawnAthena();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void TeleportToSkyDive(float HeightAboveGround);
    
    UFUNCTION(BlueprintCallable)
    void StopConsumableUseAudio();
    
    UFUNCTION(BlueprintCallable)
    void StartConsumableUseAudio(USoundBase* Sound);
    
    UFUNCTION(BlueprintCallable)
    void SetMeshHeightAdjustAthena(float HeightAdjust);
    
    UFUNCTION(BlueprintCallable)
    void SetFallInstigator(AController* NewFallInstigator, FGameplayTagContainer NewFallingDamageTags);
    
    UFUNCTION(BlueprintCallable)
    void SetCharacterPartGroupingVisibility(EBodyPartVisibilityGrouping BodyPartVisibilityGrouping, bool bNewVisibility);
    
    UFUNCTION(BlueprintCallable)
    void SetCapsuleRadiusAthena(float Radius);
    
    UFUNCTION(BlueprintCallable)
    void SetCapsuleHalfHeightAthena(float HalfHeight);
    
    UFUNCTION(BlueprintCallable)
    void SetBushEnabled(bool bEnableBush);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetInteractingItem(AActor* InteractingItem, bool bClearInteraction);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSuccessfulBuildingEdit();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void OnSignificantTick(float Significance);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void OnResInDuringWarmup();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ReplicatedAnimMontage();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ReplayRepAnimMontageInfo();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_RepAnimMontageStartSection();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_NetMovementPrioritized();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MeshHeightAdjustAthena();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsInWaterVolume();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CapsuleRadiusAthena();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CapsuleHalfHeightAthena();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_bIsCreativeGhostModeActivated();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_AttributeProxy();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReceivedStormSurgeDamage();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void OnPawnLODChanged(int32 NewLOD);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOutsideSafeZonePhaseChanged(int32 SafeZonePhase);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLeftReplayRelevancy();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnExitedWaterVolume();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEnteredWaterVolume();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEnteredReplayRelevancy();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCreativeStopGhost();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCreativeStartGhost();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void NetMulticast_SuccessfulBuildingEdit();
    
    UFUNCTION(BlueprintCallable)
    void MeleeCombatBlocked();
    
    UFUNCTION(BlueprintCallable)
    void MeleeCombatActivated();
    
    UFUNCTION(BlueprintCallable)
    bool LocalIsTryingToEnterVehicle();
    
protected:
    UFUNCTION(BlueprintCallable)
    void LandscapeCheck();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayingMinigame() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBackpackEquipped(EBackpackType BackpackType) const;
    
    UFUNCTION(BlueprintCallable)
    float GetDefaultReviveFromDBNOTime();
    
protected:
    UFUNCTION(BlueprintCallable)
    void GamePhaseStepChanged(EAthenaGamePhaseStep GamePhase);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ForceReviveFromDBNO();
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void FastSharedReplication(const FSharedRepMovement& SharedRepMovement);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanPlayerCreateInCurrentVolume(AFortVolume*& OutCurrentVolume) const;
    
    UFUNCTION(BlueprintCallable)
    void CancelMeleeCombatSlow();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BushStateChanged(bool bNewBushState);
    
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION()
    void GetMutatorContext(FMutatorContext& MutatorContext) const override PURE_VIRTUAL(GetMutatorContext,);
    
};

