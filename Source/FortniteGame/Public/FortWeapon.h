#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EFortWeaponSoundState.h"
#include "GameFramework/Actor.h"
#include "Engine/DataTable.h"
#include "Engine/EngineTypes.h"
#include "GameplayEffectTypes.h"
#include "GameplayAbilitySpec.h"
#include "GameplayCueInterface.h"
#include "GameplayEffectTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "Chaos/ChaosEngineInterface.h"
#include "Styling/SlateBrush.h"
#include "CosmeticVariantCache.h"
#include "EFortItemType.h"
#include "EFortRarity.h"
#include "EFortReloadFXState.h"
#include "EFortWeaponAbilityRemovalPolicy.h"
#include "EFortWeaponChargeStateForFireFX.h"
#include "EFortWeaponCoreAnimation.h"
#include "EFortWeaponReduceMeshWorkSetting.h"
#include "EFortWeaponTriggerType.h"
#include "FortAbilitySetHandle.h"
#include "FortAnalyticsInterface.h"
#include "FortCosmeticModification.h"
#include "FortDamageSourceInterface.h"
#include "FortEffectDistanceQuality.h"
#include "FortGameplayAbilityBehaviorDistanceData.h"
#include "MaterialInterfaceArray.h"
#include "OnLocalAmmoChangedDelegate.h"
#include "OnLocalReloadCancelledDelegate.h"
#include "OnLocalReloadStartedDelegate.h"
#include "OnLocalTargetingChangedDelegate.h"
#include "OnRateOfFireChangedDelegate.h"
#include "OnReticleColorChangedDelegate.h"
#include "OnSecondaryAbilityToggledDelegate.h"
#include "OnWeaponHudKeyActionUpdatedDelegate.h"
#include "PickupInstigatorData.h"
#include "Templates/SubclassOf.h"
#include "WeaponEventDelegateDelegate.h"
#include "WeaponHudData.h"
#include "WeaponHudKeyActionVisibility.h"
#include "FortWeapon.generated.h"

class ACustomItemWrapModifier;
class AFortFXManager;
class AFortPlayerController;
class AFortProjectileTrajectory;
class APawn;
class UAnimInstance;
class UAnimMontage;
class UAnimSequence;
class UAthenaItemWrapDefinition;
class UAudioComponent;
class UFXSystemComponent;
class UForceFeedbackEffect;
class UFortAlterationItemDefinition;
class UFortCameraMode;
class UFortGameplayAbility;
class UFortGenericDataStoreManagerComponent;
class UFortSignificanceManager;
class UFortWeaponAnimSet;
class UFortWeaponFireModeData;
class UFortWeaponItemDefinition;
class UFortWorldItemDefinition;
class UMaterialInterface;
class UCameraShake;
class UNiagaraSystem;
class UParticleSystem;
class USceneComponent;
class USkeletalMeshComponentBudgeted;
class USoundBase;
class UTexture2D;
class UWeaponHitNotifyAudioBank;

UCLASS(Blueprintable)
class FORTNITEGAME_API AFortWeapon : public AActor, public IGameplayCueInterface, public IFortDamageSourceInterface, public IFortAnalyticsInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRateOfFireChanged OnWeaponRateOfFireChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWeaponEventDelegate OnPressTrigger;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWeaponEventDelegate OnReleaseTrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool bIsEquippingWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool bIsReloadingWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool bIsChargingWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAimingConsumable;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLocalAmmoChanged OnLocalAmmoChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLocalReloadStarted OnLocalReloadStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLocalReloadCancelled OnLocalReloadCancelled;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLocalTargetingChanged OnLocalTargetingChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSecondaryAbilityToggled OnSecondaryAbilityToggled;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWeaponEventDelegate OnWeaponFireAudioVisuals;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnReticleColorChanged OnReticleColorChanged;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseAttributeCaching;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ReplicatedWeaponData, meta=(AllowPrivateAccess=true))
    UFortWeaponItemDefinition* WeaponData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ReplicatedCosmeticOverrideWeaponData, meta=(AllowPrivateAccess=true))
    UFortWeaponItemDefinition* CosmeticOverrideWeaponData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bImpactFXAttachedToHitActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FFortGameplayAbilityBehaviorDistanceData> GameplayAbilityBehaviorDistanceData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWeaponHitNotifyAudioBank* HitNotifyAudioBank;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRemoveAbilitiesWhenRemovedFromInventory;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortWeaponAbilityRemovalPolicy GrantedAbilityRemovalPolicy[3];
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_EquippedWeaponDestroyWrapper, meta=(AllowPrivateAccess=true))
    uint8 EquippedWeaponDestroyWrapperRepCounter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float PersistentFXStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimumTimeForPersistentFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAthenaItemWrapDefinition> OverrideItemWrapSoftPtr;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortWeaponReduceMeshWorkSetting WeaponReduceMeshWorkSetting;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldDrawNativeReticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* ReticleImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* AutoFireReticleImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor ReticleDefaultColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor ReticleEnemyColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor ReticleBuildingColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor ReticleNoTargetColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* HitNotifyReticleImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* HitNotifyLocationReticleImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HitNotifyDisplayDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* ReticleCenterImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* ReticleCenterPerfectAimImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* ReticleInvalidTargetImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* MuzzleBlockedReticleImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* ReticleAltCenterImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* ReticleOuterImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* ReticleAltOuterImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReticleDefaultPrimaryStrikeAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReticleDefaultSecondaryStrikeAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSupportsAutofireAtReticleTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortCameraMode> CameraBase3PClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortCameraMode> CameraTargeting3PClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortCameraMode> CameraBase1PClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortCameraMode> CameraTargeting1PClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* DestroyedSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* OutOfAmmoSound;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true, ArraySizeEnum="EFortReloadFXState"))
    USoundBase* ReloadSounds[EFortReloadFXState::Max_None];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* PrimaryFireSound1P;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true, ArraySizeEnum="EFortWeaponSoundState"))
    USoundBase* PrimaryFireSound[EFortWeaponSoundState::Max_None];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* PrimaryFireStopSound1P;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true, ArraySizeEnum="EFortWeaponSoundState"))
    USoundBase* PrimaryFireStopSound[EFortWeaponSoundState::Max_None];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true, ArraySizeEnum="EFortWeaponSoundState"))
    USoundBase* SecondaryFireSound[EFortWeaponSoundState::Max_None];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true, ArraySizeEnum="EFortWeaponSoundState"))
    USoundBase* SecondaryFireStopSound[EFortWeaponSoundState::Max_None];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true, ArraySizeEnum="EFortWeaponChargeStateForFireFX"))
    USoundBase* ChargeFireSound1P[EFortWeaponChargeStateForFireFX::Max_None];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true, ArraySizeEnum="EFortWeaponChargeStateForFireFX"))
    USoundBase* ChargeFireSound[EFortWeaponChargeStateForFireFX::Max_None];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* TargetingStartSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* TargetingEndSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PrimaryFireSoundFadeOutTime;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* ImpactPhysicalSurfaceSounds[26];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* ImpactPhysicalSurfaceEffects[26];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UNiagaraSystem>> ImpactNiagaraPhysicalSurfaceEffectAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCameraShake> ImpactCameraShake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UForceFeedbackEffect* PrimaryForceFeedbackEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UForceFeedbackEffect* SecondaryForceFeedbackEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UForceFeedbackEffect* PrimaryImpactForceFeedbackEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UForceFeedbackEffect* SecondaryImpactForceFeedbackEffect;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UNiagaraSystem*> ImpactNiagaraPhysicalSurfaceEffectInstances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortGenericDataStoreManagerComponent* DataStoreManager;
    
    UPROPERTY(EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAudioComponent* FireAudioChannels[4];
    
    UPROPERTY(EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAudioComponent* ReloadAudioChannels[3];
    
    UPROPERTY(EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAudioComponent* TargetingAudioChannels[2];
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CurrentGunFireIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponentBudgeted* WeaponMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USkeletalMeshComponentBudgeted*> AllWeaponMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> DefaultWeaponMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<USkeletalMeshComponentBudgeted*, FMaterialInterfaceArray> OriginalMaterialMap;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 FireAudioChannelWantsToPlay[4];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WrapSectionMask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bUsingSecondaryFireAudio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bHasCachedAdditionalMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FColor CurrentReticleColor;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector CurrentDamageStartLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector CurrentAdjustedAimDirection;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortEffectDistanceQuality FireFXSignificance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LastFireTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_LastFireTimeVerified, meta=(AllowPrivateAccess=true))
    float LastFireTimeVerified;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsPlayingFireFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bFireFXTriggered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float TimerIntervalAdjustment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InputQueueTimePercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowTargeting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsTargeting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LastTargetingTransitionTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector TargetSourceOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector TargetSourceOffsetWhileCrouched;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector TargetSourceOffsetWhileTargeting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTraceThroughPawns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTraceThroughWorld;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TraceThroughPawnsLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TraceThroughBuildingsLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseProjectileTrace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseWeaponTraceForReticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ProjectilePitchOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LastReloadTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LastSuccessfulReloadTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CurrentReloadDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FGuid ItemEntryGuid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 WeaponLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_AmmoCount, meta=(AllowPrivateAccess=true))
    int32 AmmoCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_PhantomReserveAmmo, meta=(AllowPrivateAccess=true))
    int32 PhantomReserveAmmo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 BurstFireCounter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float ChargeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float AccumulatedChargeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag StartChargeGameplayCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag MaxChargeGameplayCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentShotLogIndex;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<uint32> ShotLogFlags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bInitializedWeaponItem: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bPendingDestroyDueToDurabilityOrStackCount: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bCompletedAppliedAlterationsLoad: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bCompletedWeaponLoad: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsCosmeticLimited: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bReplicatedAppliedAlterationsWithNoInstigator: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bShouldFullyApplyVariantsOnEquip: 1;
    
    UPROPERTY(EditAnywhere, ReplicatedUsing=OnRep_ChargeStatusPack, meta=(AllowPrivateAccess=true))
    int16 ChargeStatusPack;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AFortProjectileTrajectory> AttachedTrajectoryIndicator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    UFortGameplayAbility* ActiveAbility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_PrimaryAbilitySpecHandle, meta=(AllowPrivateAccess=true))
    FGameplayAbilitySpecHandle PrimaryAbilitySpecHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FGameplayAbilitySpecHandle SecondaryAbilitySpecHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FGameplayAbilitySpecHandle ReloadAbilitySpecHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FGameplayAbilitySpecHandle ImpactAbilitySpecHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FGameplayAbilitySpecHandle> EquippedAbilityHandles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FFortAbilitySetHandle> EquippedAbilitySetHandles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ReplicatedAppliedAlterations, meta=(AllowPrivateAccess=true))
    TArray<UFortAlterationItemDefinition*> AppliedAlterations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FCosmeticVariantCache PreviousWeaponVariants;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAthenaItemWrapDefinition* AppliedItemWrap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortFXManager* CachedFXManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortSignificanceManager* CachedSignificanceManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MuzzleSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MuzzleFalloffSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName WeaponHandSocketNameOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LeftHandWeaponHandSocketNameOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bForceOverrideGenerateOverlapEvents: 1;
    
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxWeaponSwitchNetworkWaitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LastFireAbilityTime;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* EquipAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* ReloadAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> CustomReloadAnimationPerAmmoToFill;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* PrimaryAbilityAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* WeaponEquipMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* WeaponReloadMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> CustomWeaponReloadMontagePerAmmoToFill;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* WeaponPrimaryAbilityMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* PoseOffsetAnimSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* PoseOffsetAnimSequenceFemaleOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EFortWeaponCoreAnimation::Type> WeaponCoreAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortWeaponAnimSet* WeaponPawnAnimSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAnimInstance> WeaponPawnAnimLayerOverlayClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortWeaponAnimSet* WeaponPawnAnimsetOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* UnableToPerformActionMontageOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortWeaponFireModeData> ActiveFireMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortWeaponFireModeData> FireModeData_HipFire;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortWeaponFireModeData> FireModeData_AimDownSight;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ACustomItemWrapModifier* ItemWrapModifier;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* LockOnTargetCandidate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIgnoreTryToFireSlotCooldownRestriction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFireConsumableAnalyticEvent;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWeaponHudKeyActionUpdated OnWeaponHudKeyActionUpdated;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWeaponHudData> HudKeyActionData;
    
public:
    AFortWeapon();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool WeaponDataIsValid() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool WeaponDataHasMatchingGameplayTag(const FGameplayTag TagToCheck) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool WeaponDataHasAnyMatchingGameplayTags(const FGameplayTagContainer TagContainer) const;
    
    UFUNCTION(BlueprintCallable)
    void UseWeaponDurability(float DurabilityScale);
    
    UFUNCTION(BlueprintCallable)
    void UpdateDamageStartLocation();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool TryReloadAmmoFromAbility();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void StopWeaponFireFX();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void StopForceFeedback();
    
    UFUNCTION(BlueprintCallable)
    void SetWeaponVisibilityControllerOnly(const bool bDesiredVisibility, const bool bForceUpdate);
    
    UFUNCTION(BlueprintCallable)
    void SetWeaponVisibility(const bool bDesiredVisibility, const bool bForceUpdate);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetWeaponPawnAnimsetOverride(UFortWeaponAnimSet* NewWeaponPawnAnimsetOverride);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetWeaponData(UFortWeaponItemDefinition* InWeaponData);
    
    UFUNCTION(BlueprintCallable)
    void SetTrajectoryVisibilityControllerOnly(AFortPlayerController* FortPlayerController, const bool bNewVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetTrajectoryVisibility(const bool bNewVisible);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetTraceThroughPawnsLimit(int32 NewTraceThroughPawnsLimit);
    
    UFUNCTION(BlueprintCallable)
    void SetTraceThroughPawns(bool bNewTraceThroughPawns);
    
    UFUNCTION(BlueprintCallable)
    void SetTraceThroughBuildingsLimit(int32 NewTraceThroughBuildingsLimit);
    
    UFUNCTION(BlueprintCallable)
    void SetShouldDrawNativeReticle(bool bInShouldDrawReticle);
    
    UFUNCTION(BlueprintCallable)
    void SetHudKeyActionVisibility(int32 Index, bool bVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetHudKeyActionsVisibility(const TArray<FWeaponHudKeyActionVisibility>& IndexVisibilityArray);
    
public:
    UFUNCTION(BlueprintCallable)
    bool SetHiddenInGameOtherLocalControllersOnly(USceneComponent* SceneComp, const bool NewHidden, const bool bPropagateToChildren);
    
    UFUNCTION(BlueprintCallable)
    bool SetHiddenInGameControllerOnly(USceneComponent* SceneComp, const bool NewHidden, const bool bPropagateToChildren);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void SetFireSoundPitchMultiplier(const float NewPitch);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetChargeState(uint8 NewState);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerResetShotReport();
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerReleaseWeaponAbility(const FGameplayAbilitySpecHandle& SpecHandle);
    
public:
    UFUNCTION(BlueprintCallable)
    void RestoreOriginalMaterials();
    
    UFUNCTION(BlueprintCallable)
    void ResetTempWeaponMaterialOverride();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Reload();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void PlayWeaponFireFX(bool bSecondaryFire);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void PlayReloadFX(EFortReloadFXState ReloadStage);
    
protected:
    UFUNCTION(BlueprintCallable)
    void PlayNativeImpactFX(const FHitResult& HitResult, const FGameplayCueParameters& GameplayCueParameters);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void PlayForceFeedback(bool bSecondaryFire, bool bPersistentFire, bool bImpact);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWeaponVisibilityChanged(bool bVisible, bool bSetForLocalControllerOnly);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnWeaponMontageStarted(UAnimMontage* WeaponMontage);
    
    UFUNCTION(BlueprintCallable)
    void OnWeaponMontageBlendingOut(UAnimMontage* WeaponMontage, bool bInterrupted);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWeaponDetached();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWeaponAttached();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTetherDetached();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void OnStopWeaponFireFX();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartCharge();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetTargeting(bool bNewIsTargeting);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_ReplicatedWeaponData();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ReplicatedCosmeticOverrideWeaponData();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ReplicatedAppliedAlterations();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PrimaryAbilitySpecHandle();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PhantomReserveAmmo();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_LastFireTimeVerified();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_EquippedWeaponDestroyWrapper();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ChargeStatusPack();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_AmmoCount(int32 OldAmmoCount);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void OnRemoteClientReachedMinCharge();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void OnRemoteClientReachedMaxCharge();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void OnReachedMinCharge();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReachedMaxChargeForCurAmmo();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void OnReachedMaxCharge();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void OnPlayWeaponFireFX(bool bPersistentFire, bool bSecondaryFire);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void OnPlayReloadFX(EFortReloadFXState ReloadStage);
    
    //UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
  //  void OnPlayImpactFX(FHitResult HitResult, TEnumAsByte<EPhysicalSurface> ImpactPhysicalSurface, UFXSystemComponent* SpawnedPSC);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnPawnMontageStarted(UAnimMontage* PawnMontage);
    
    UFUNCTION(BlueprintCallable)
    void OnPawnMontageBlendingOut(UAnimMontage* PawnMontage, bool bInterrupted);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void OnOutOfAmmoFire();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInstigatorSet();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInitWeaponCosmetics();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInitCosmeticAlterations(FFortCosmeticModification CosmeticMod);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInitAlteration(UFortAlterationItemDefinition* NewAlteration);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void OnEquippedWeaponDestory();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEndCharge();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChargeUp();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChargeDown();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnApplyFireModeData(UFortWeaponFireModeData* FireModeData);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void OnAmmoCountChanged();
    
public:
    UFUNCTION(BlueprintCallable)
    void ModAmmo(int32 AmountToUse);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnUnEquip();
    
    UFUNCTION(BlueprintCallable)
    void K2_ConsumeAmmo(int32 Quantity);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSuppressed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsReloading() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsProjectileWeapon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFiring() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEquipped() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool InventoryOwnerHasInfiniteAmmo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasInfiniteAmmo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void HandleBlueprintProbablyCosmeticStomp();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetWeaponRateOfFireModifier();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortWeaponAnimSet* GetWeaponPawnAnimSet() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetWeaponMeshes(TArray<USkeletalMeshComponentBudgeted*>& WeaponMeshes) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USkeletalMeshComponentBudgeted* GetWeaponMesh() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDataTableRowHandle GetWeaponDataWeaponStatHandle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TEnumAsByte<EFortWeaponTriggerType::Type> GetWeaponDataTriggerType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSlateBrush GetWeaponDataSmallPreviewImageBrush() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UTexture2D> GetWeaponDataSmallPreviewImage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFortRarity GetWeaponDataRarity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetWeaponDataPlayerGrantedGameplayTags(FGameplayTagContainer& GameplayTags) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFortItemType GetWeaponDataItemType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetWeaponDataGameplayTags(FGameplayTagContainer& GameplayTags) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortWorldItemDefinition* GetWeaponDataAmmoWorldItemDefinition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortWeaponItemDefinition* GetWeaponData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintPure)
    EFortWeaponChargeStateForFireFX GetWeaponChargeStateForFireFX() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTraceThroughPawnsLimit() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetTraceThroughPawns() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTraceThroughBuildingsLimit() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTimeToNextFire() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetSupportsAutoFireAtReticleTargetMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FColor GetReticleColor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRemainingAmmo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetReloadTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetReloadProgress() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAnimMontage* GetReloadAnimation() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRange() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetProjectileSpeed(float ChargePercent) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetProjectilePitchOffset() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetPlayerActiveGrantedGameplayTags(FGameplayTagContainer& GameplayTags) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetPickupInstigatorData(int32& InstigatorHandle, FPickupInstigatorData& InstigatorData) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetMuzzleSocketTransform(int32 PatternIndex) const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetMuzzleSocketName(int32 PatternIndex) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FVector GetMuzzleLocation(int32 PatternIndex) const;
    
    UFUNCTION(BlueprintCallable)
    float GetMeleeAttackPlayRate();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMagazineAmmoCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLocalRemainingAmmo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLocalMagazineAmmoCount() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsTargeting() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsChargingWeapon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGuid GetInventoryGUID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FWeaponHudData> GetHudKeyActionData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFiringRate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetDamageStartLocation(FVector& AimDir, int32 PatternIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentMaxChargePercent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TEnumAsByte<EFortWeaponCoreAnimation::Type> GetCoreAnimation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetChargeToMinPercent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetChargeTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetChargePercent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBulletsPerClip() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAmmoCostPerFire(float ChargePercentage) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UFortAlterationItemDefinition*> GetAlterations() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAccumulatedChargeTime() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void GameplayCue_Weapons_Activation(TEnumAsByte<EGameplayCueEvent::Type> EventType, FGameplayCueParameters Parameters);
    
    UFUNCTION(BlueprintCallable)
    void GameplayCue_Impact(TEnumAsByte<EGameplayCueEvent::Type> EventType, FGameplayCueParameters Parameters);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DoesHaveOverrideWrap() const;
    
    UFUNCTION(BlueprintCallable)
    FColor DetermineReticleColor();
    
protected:
    UFUNCTION(Client, Reliable)
    void ClientReportShotFlags(uint32 ShotFlags, int32 ShotIndex);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientGivenTo(APawn* P);
    
public:
    UFUNCTION(BlueprintCallable)
    void CheckPendingFire();
    
    UFUNCTION(BlueprintCallable)
    void CancelActiveAbility();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure=false)
    void AttemptApplyOverrideWrapToActor(AActor* Actor) const;
    
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void ForwardGameplayCueToParent() override PURE_VIRTUAL(ForwardGameplayCueToParent,);
    
};

