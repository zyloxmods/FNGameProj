#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameplayEffectTypes.h"
	#include "Abilities/GameplayAbilityTypes.h"
#include "GameplayEffectTypes.h"
#include "GameplayCueInterface.h"
#include "GameplayEffectTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "AthenaPawnReplayData.h"
#include "EAthenaGamePhaseStep.h"
#include "EBackpackType.h"
#include "FortEffectDistanceQuality.h"
#include "FortMarkableActorInterface.h"
#include "FortMutatorContext.h"
#include "FortPlayerAthenaAttributeReplicationProxy.h"
#include "FortPlayerPawn.h"
#include "MarkedActorDisplayInfo.h"
#include "MutatorContext.h"
#include "OnFortPlayerDiedDelegate.h"
#include "OnInteractionFailedCallbackDelegate.h"
#include "OnUIGameplayCueEventDelegate.h"
#include "SharedRepMovement.h"
#include "Templates/SubclassOf.h"
#include "FortPlayerPawnAthena.generated.h"

class AActor;
class ABuildingSMActor;
class AController;
class AFortEmitterCameraLensEffectDirectional;
class AFortVolume;
class APawn;
class IFortSafeZoneInterface;
class UFortSafeZoneInterface;
class UAnimMontage;
class UAudioComponent;
class UDataTable;
class UForceFeedbackEffect;
class UFortMobileInteractionComponent;
class UFortPawnComponent_Convert;
class UFortSkinWeightOverrideManager;
class UCameraShake;
class UParticleSystemComponent;
class USoundBase;
class UTexture2D;
class UUnicornAthenaPawnSampler;

UCLASS(Blueprintable, MinimalAPI)
class AFortPlayerPawnAthena : public AFortPlayerPawn, public IFortMutatorContext, public IFortMarkableActorInterface {
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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ConvertFromDBNOTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 DBNORevivalStacking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float ServerWorldTimeRevivalTime;
    
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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CapsuleRadiusAthena, meta=(AllowPrivateAccess=true))
    float CapsuleRadiusAthena;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CapsuleHalfHeightAthena, meta=(AllowPrivateAccess=true))
    float CapsuleHalfHeightAthena;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MeshHeightAdjustAthena, meta=(AllowPrivateAccess=true))
    float MeshHeightAdjustAthena;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldPawnInstantDie;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldPawnDBNODisplayOnKillFeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldPawnDeathDisplayOnKillFeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldPawnLeaveEliminationIndicator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldPawnAwardPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldTriggerDeathAnalytics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldDropItemsOnDeath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldSkipMovementFullSimulation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bEnableRenderCustomDepth: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bEnableGroundInteractionEffects: 1;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_AttributeProxy, meta=(AllowPrivateAccess=true))
    FFortPlayerAthenaAttributeReplicationProxy AttributeReplicationProxy;
    
    UPROPERTY( EditAnywhere, ReplicatedUsing=OnRep_ReplayRepAnimMontageInfo, meta=(AllowPrivateAccess=true))
    FGameplayAbilityRepAnimMontage ReplayRepAnimMontageInfo;
    
    UPROPERTY(EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FMinimalGameplayCueReplicationProxy SimulatedProxyActiveGameplayCues;
    
    UPROPERTY(EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FMinimalGameplayCueReplicationProxy SimulatedProxyMinimalReplicationGameplayCues;
    
    UPROPERTY(EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FMinimalReplicationTagCountMap FastReplicationMinimalReplicationTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* CurrentQuickChatIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bADSWhileNotOnGround;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* DefaultCrouchedFootstepSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* DefaultCrouchSprintFootstepSound;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFortPlayerDied OnFortPlayerDied;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APawn* KillerForSpectatorRotation;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDelaySimProxyCollisionInAircraftPhase;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeToDelaySkydiveCollision;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PositionCaptureIntervalForDistanceTraveledAccumulation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SkydiveAudioMovementVolumeInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SkydiveAudioForwardDotInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SkydiveAudioRightDotInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortEffectDistanceQuality DamageFXSignificance;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AFortEmitterCameraLensEffectDirectional> ScreenEffectHealthDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AFortEmitterCameraLensEffectDirectional> ScreenEffectShieldDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* AdditiveHitReactsMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer DamageTagsToNotDisplayDirectionDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer DamageTagsToNotAddCameraShake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer WeaponTagsToNotPlayCircleAndStreakFX;
    
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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float SkydiveDebugTimer;
    
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
    UParticleSystemComponent* PSC_HitDamage;
    
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
    float InAirAudioParameterValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InAirAudioFallDistanceThreshold;
    
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
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_bIsCreativeGhostModeActivated, meta=(AllowPrivateAccess=true))
    bool bIsCreativeGhostModeActivated;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortSkinWeightOverrideManager* SkinWeightManager;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer InvulnerabilityTags;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnicornAthenaPawnSampler* UnicornPawnSampler;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMarkedActorDisplayInfo MarkerDisplay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UForceFeedbackEffect* DamageForceFeedback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCameraShake> DamageCameraShakeClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer DamageTagsExcludedFromCameraShake;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortPawnComponent_Convert* ConvertComponent;
    
public:
    AFortPlayerPawnAthena();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void TurnOnCollisionAfterSkydiveDelay();
    
    UFUNCTION(BlueprintCallable)
    void TeleportToSkyDive(float HeightAboveGround);
    
    UFUNCTION(BlueprintCallable)
    void StopConsumableUseAudio();
    
    UFUNCTION(BlueprintCallable)
    void StartConsumableUseAudio(USoundBase* Sound);
    
    UFUNCTION(BlueprintCallable)
    void SetShouldSkipMovementFullSimulation(bool bInShouldSkipMovementFullSimulation);
    
    UFUNCTION(BlueprintCallable)
    void SetShouldDropItemsOnDeath(bool bInShouldDropItemsOnDeath);
    
    UFUNCTION(BlueprintCallable)
    void SetMeshHeightAdjustAthena(float HeightAdjust);
    
    UFUNCTION(BlueprintCallable)
    void SetFallInstigator(AController* NewFallInstigator, FGameplayTagContainer NewFallingDamageTags);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetDamageCameraShakeClass(TSubclassOf<UCameraShake> NewValue);
    
public:
    UFUNCTION(BlueprintCallable)
    bool SetCharacterBodyVisibilityForPossession(bool bVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetCapsuleRadiusAthena(float Radius);
    
    UFUNCTION(BlueprintCallable)
    void SetCapsuleHalfHeightAthena(float HalfHeight);
    
    UFUNCTION(BlueprintCallable)
    void SetBushEnabled(bool bEnableBush);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSuicide(bool bSuppressResurrectionChip, int32 MatchPlacement);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetInteractingItem(AActor* InteractingItem, bool bClearInteraction);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerCreativeToggleGhost(const bool bEnableOnly);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSuccessfulBuildingEdit();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSpawnImmunityTimeReset();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void OnSignificantTick(float Significance);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void OnResInDuringWarmup();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ReplayRepAnimMontageInfo();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MeshHeightAdjustAthena();
    
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
    
    UFUNCTION(BlueprintCallable)
    float GetCurrentVoiceAmplitude();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UAnimMontage* GetAdditiveHitReactsMontage();
    
    UFUNCTION(BlueprintCallable)
    void GameplayCue_PinkOatmeal_MeatPizza_PossessProp(TEnumAsByte<EGameplayCueEvent::Type> EventType, FGameplayCueParameters Parameters);
    
    UFUNCTION(BlueprintCallable)
    void GameplayCue_Creative_PossessProp(TEnumAsByte<EGameplayCueEvent::Type> EventType, FGameplayCueParameters Parameters);
    
    UFUNCTION(BlueprintCallable)
    void GamePhaseStepChanged(const TScriptInterface<IFortSafeZoneInterface>& SafeZoneInterface, const EAthenaGamePhaseStep GamePhaseStep);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ForceReviveFromDBNO();
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void FastSharedReplication(const FSharedRepMovement& SharedRepMovement);
    
public:
    UFUNCTION(BlueprintCallable)
    void CreativeToggleGhost(const bool bEnableOnly);
    
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

