#pragma once
#include "CoreMinimal.h"
#include "Perception/AISightTargetInterface.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Character.h"
#include "Engine/DataTable.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "Engine/NetSerialization.h"
#include "VisualLogger/VisualLoggerDebugSnapshotInterface.h"
#include "AbilitySystemReplicationProxyInterface.h"
#include "GameplayEffectTypes.h"
#include "GameplayEffectTypes.h"
#include "GameplayCueInterface.h"
#include "GameplayEffectTypes.h"
#include "GameplayCueInterface.h"
#include "GameplayEffectTypes.h"
#include "GameplayEffectTypes.h"
#include "GameplayPrediction.h"
#include "GameplayTagContainer.h"
#include "GameplayTagAssetInterface.h"
#include "GameplayTagContainer.h"
#include "Styling/SlateBrush.h"
#include "AssetAttachment.h"
#include "AthenaBatchedDamageGameplayCues_NonShared.h"
#include "AthenaBatchedDamageGameplayCues_Shared.h"
#include "CalloutEntry.h"
#include "ClientAILODSettings.h"
#include "DamageDoneInfo.h"
#include "DamageDoneSourceInfo.h"
#include "DamageDoneTargetInfo.h"
#include "DamagerInfo.h"
#include "EFortAbilityTargetingSource.h"
#include "EFortControlRecoveryBehavior.h"
#include "EFortDamageZone.h"
#include "EFortFootstepSurfaceType.h"
#include "EFortMovementStyle.h"
#include "EFortPawnPushSize.h"
#include "EFortSoundIndicatorTypes.h"
#include "EFortSwimmingAudioType.h"
#include "FortAIEncounterInfoOwnerInterface.h"
#include "FortAbilitySystemInterface.h"
#include "FortActiveMontageDecisionWindow.h"
#include "FortAutoFireTargetInterface.h"
#include "FortConversationSentence.h"
#include "FortCurieInterface.h"
#include "FortDamageableActorInterface.h"
#include "FortHealthRegenInterface.h"
#include "FortLockOnTargetInterface.h"
#include "FortPawnEquippedWeaponSignatureDelegate.h"
#include "FortPawnHitSignatureDelegate.h"
#include "FortPawnUnEquippedWeaponSignatureDelegate.h"
#include "FortPawnVocalChord.h"
#include "FortPickupEntryData.h"
#include "FortSpottableActorInterface.h"
#include "FortTargetSelectionInterface.h"
#include "FortTeamActorInterface.h"
#include "OnDBNOStateChangedEventDelegate.h"
#include "OnHolsteredEventDelegate.h"
#include "OnPlayerStartDBNODelegate.h"
#include "OnStormShieldComponentCreatedDelegate.h"
#include "OnUnholsteredEventDelegate.h"
#include "PawnDamageZones.h"
#include "PawnDamagedSignatureDelegate.h"
#include "PawnDeathEffectsSignatureDelegate.h"
#include "PawnEmoteSignatureDelegate.h"
#include "PawnHealthChangedDelegate.h"
#include "PawnLandedSignatureDelegate.h"
#include "PawnTeleportedSignatureDelegate.h"
#include "PawnUpdatedDecisionWindowStackSignatureDelegate.h"
#include "RecordedGunshot.h"
#include "Templates/SubclassOf.h"
#include "FortPawn.generated.h"

class AActor;
class AController;
class AEmitterCameraLensEffectBase;
class AFortEmitterCameraLensEffectDirectional;
class AFortPawn;
class AFortPickup;
class AFortSoundCameraLensEffect;
class AFortWaterBodyActor;
class AFortWeapon;
class APlayerController;
class UAbilitySystemComponent;
class UAnimInstance;
class UAnimMontage;
class UAudioComponent;
class UFXSystemComponent;
class UFortAIEncounterInfo;
class UFortAbilitySystemComponent;
class UFortAdvancedMovementSet;
class UFortAthenaAILODComponent;
class UFortControlResistanceSet;
class UFortDamageSet;
class UFortDecoItemDefinition;
class UFortFeedbackBank;
class UFortFootstepAudioBank;
class UFortGameplayAbility;
class UFortGameplayModifierItemDefinition;
class UFortHealthBarIndicator;
class UFortHealthSet;
class UFortItemDefinition;
class UFortMovementSet;
class UFortStormShieldComponent;
class UFortSwimmingAudioBank;
class UFortWeaponItemDefinition;
class UGameplayEffect;
class UMaterialInstanceDynamic;
class UMeshComponent;
class UParticleSystemComponent;
class UPegasusGameEventCollector;
class UPrimitiveComponent;
class USceneComponent;
class USkeletalMeshComponent;
class USkeletalMeshSocket;
class USoundAttenuation;
class USoundBase;
class USoundEffectSourcePresetChain;
class UTexture;
class UWeaponHitNotifyAudioBank;

UCLASS(Blueprintable)
class FORTNITEGAME_API AFortPawn : public ACharacter, public IFortTeamActorInterface, public IGameplayTagAssetInterface, public IFortDamageableActorInterface, public IFortSpottableActorInterface/*, public IFortAbilitySystemInterface*/, public IGameplayCueInterface, public IFortTargetSelectionInterface, public IFortAIEncounterInfoOwnerInterface, public IVisualLoggerDebugSnapshotInterface, public IFortHealthRegenInterface, public IAISightTargetInterface, public IFortAutoFireTargetInterface, public IFortLockOnTargetInterface/*, public IAbilitySystemReplicationProxyInterface*/, public IFortCurieInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseBaseChanged: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 bIgnoreNextFallingDamage: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=HandleIsDying, meta=(AllowPrivateAccess=true))
    uint8 bIsDying: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bPlayedDying: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=HandleIsHiddenForDeath, meta=(AllowPrivateAccess=true))
    uint8 bIsHiddenForDeath: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_IsKnockedBack, meta=(AllowPrivateAccess=true))
    uint8 bIsKnockedback: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsStaggered: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCanCapsuleBeUsedForTargeting: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseLineTestForDamageZoneBoneDetection: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MovingEmote, meta=(AllowPrivateAccess=true))
    uint8 bMovingEmote: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 bMovingEmoteForwardOnly: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MovingEmoteFollowingOnly, meta=(AllowPrivateAccess=true))
    uint8 bMovingEmoteFollowingOnly: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 bMovingEmoteSkipLandingFX: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 bIsInvulnerable: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    uint8 bSpotted: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bRegisterWithAISight: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bRegisterWithAimAssist: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bPrimaryInputHeld: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bSecondaryInputHeld: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bPrimaryInputQueued: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_WeaponActivated, meta=(AllowPrivateAccess=true))
    uint8 bWeaponActivated: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bSkipAnalogJump: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ETraceTypeQuery> FootstepTraceTypeQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EFortFootstepSurfaceType::Type> FootstepSurfaceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture* FootstepIconOverride;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUpdateRateShiftBucket UroShiftBucket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUpdateMeshComponentUpdateFlagOnServer: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUROCanTieToLODs: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bPostProcessNavLocation: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bHealthSynced: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_bWeaponHolstered, meta=(AllowPrivateAccess=true))
    uint8 bWeaponHolstered: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bSkipReticleColorTrace: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bTreatAsPawnForHitMarkers: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDisplayPawnHitMarkersForChildActors: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUsesStats: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAllowBuildingActorTeleport: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsDBNO, meta=(AllowPrivateAccess=true))
    uint8 bIsDBNO: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    uint8 bWasDBNOOnDeath: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCachedIsInAthena: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EFortMovementStyle::Type> CurrentMovementStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortControlRecoveryBehavior ControlRecoveryBehavior;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_TeleportCounter, meta=(AllowPrivateAccess=true))
    uint8 TeleportCounter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle PawnStatHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SlidingFriction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SlidingBrakingDeceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, ReplicatedUsing=OnRep_StormShieldComponent, meta=(AllowPrivateAccess=true))
    UFortStormShieldComponent* StormShieldComponent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStormShieldComponentCreated OnStormShieldComponentCreated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortPawnPushSize PushSize;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_PawnUniqueID, meta=(AllowPrivateAccess=true))
    int32 PawnUniqueID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_CurrentWeapon, meta=(AllowPrivateAccess=true))
    AFortWeapon* CurrentWeapon;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortWeapon* PreviousWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AFortWeapon*> CurrentWeaponList;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString PreviousAbilityWeaponNameForTelemetry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName WeaponHandSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LeftHandWeaponHandSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* SpawnSpot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer DeathTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    float SpawnImmunityTime;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortWaterBodyActor* CurrentWaterBody;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldSupportSurfaceSwimming;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ReplicatedWaterBody, meta=(AllowPrivateAccess=true))
    AFortWaterBodyActor* ReplicatedWaterBody;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AFortPickup*> IncomingPickups;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortPickupEntryData> PickupDirectionData;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool bIsStunned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 AdditiveCringeCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float AdditiveCringeDuration;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSupportsDamageNumbersAtHitLocation;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_PushMomentum, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize PushMomentum;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    float LocalSpin;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayCueTag DeathCueTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USkeletalMeshSocket* DeathHitSocket;
    
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerStartDBNO OnPlayerStartDBNO;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDBNOStateChangedEvent OnDBNOStateChanged;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TeamBeaconMaxDist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor TeamBeaconTextColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LastTakeHitTimeTimeout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LastDamagedTime;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortWeapon* CurrentlyAttachedWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* CachedNavFloor;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxFootstepDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* DBNOLandingSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* DefaultFootstepSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* DefaultFastFootstepSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* DefaultLandingSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* DefaultHardLandingSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* DefaultJumpSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWeaponHitNotifyAudioBank* DefaultHitNotifyAudioBank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortSwimmingAudioBank* DefaultSwimmingAudioBank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LineTestForDamageZoneBoneDetectionRadius;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FPawnDamageZones DamageZones[4];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_DamageZoneActiveBitMask, meta=(AllowPrivateAccess=true))
    uint8 DamageZoneActiveBitMask;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargettingZOffset;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_JumpFlashCount, meta=(AllowPrivateAccess=true))
    uint8 JumpFlashCountPacked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_LandingFlashCount, meta=(AllowPrivateAccess=true))
    uint8 LandingFlashCountPacked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<FName, UAudioComponent*> EmoteAudioComps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAttenuation* FrontEndEmoteAudioAttenuation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAttenuation* InGameEmoteAudioAttenuation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundEffectSourcePresetChain* InGameEmoteSoundEffectSoundPresetChain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<int32, UMeshComponent*> EmoteMeshComps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, AActor*> EmotePropActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<int32, UParticleSystemComponent*> EmoteParticleSystemComps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 EmoteCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LastEmoteTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LastEmoteEndTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortItemDefinition* LastEmoteItemDef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_LastReplicatedEmoteExecuted, meta=(AllowPrivateAccess=true))
    UFortItemDefinition* LastReplicatedEmoteExecuted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bFireBlockedByEmoteCooldown;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EmoteToFireCooldownTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_EmoteWalkSpeed, meta=(AllowPrivateAccess=true))
    float EmoteWalkSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFortGameplayModifierItemDefinition*> AdditionalModifierDefinitions;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPawnTeleportedSignature OnPawnTeleported;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPawnLandedSignature OnPawnLanded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPawnEmoteSignature OnPawnStartedEmote;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPawnEmoteSignature OnPawnStoppedEmote;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortPawnHitSignature OnHitPawn;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPawnDamagedSignature OnDied;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPawnDeathEffectsSignature OnDeathEffects;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPawnDamagedSignature OnDamaged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPawnDamagedSignature OnDidDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortFootstepAudioBank* FootstepBank;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortPawnEquippedWeaponSignature OnWeaponEquippedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortPawnUnEquippedWeaponSignature OnWeaponUnEquippedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortPawnEquippedWeaponSignature OnWeaponAttachmentChangedDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> HealthRegenDelayGameplayEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> HealthRegenGameplayEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> ShieldRegenDelayGameplayEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> ShieldRegenGameplayEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAnimInstance> CurrentWeaponAnimLayerOverlayClass;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHolsteredEvent OnHolsteredEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUnholsteredEvent OnUnholsteredEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 WeaponHolsterCounter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FName> WeaponHolsterIds;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StaySpottedTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SpottedEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortFeedbackBank* DefaultFeedback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AFortEmitterCameraLensEffectDirectional*> ActiveSoundIndicators;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AFortEmitterCameraLensEffectDirectional> DefaultSoundTrackingVisual;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer SoundTrackingVisibilityTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EFortSoundIndicatorTypes, float> PriorityModifiers;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_VocalChords, meta=(AllowPrivateAccess=true))
    TArray<FFortPawnVocalChord> VocalChords;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsDisconnectedPawn;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActiveGameplayEffectHandle MaxHealthApplicationHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> MaxHealthApplicationGameplayEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortHealthSet* HealthSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortControlResistanceSet* ControlResistanceSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortDamageSet* DamageSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortMovementSet* MovementSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortAdvancedMovementSet* AdvancedMovementSet;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPawnUpdatedDecisionWindowStackSignature OnAbilityDecisionWindowStackUpdated;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortAbilitySystemComponent* AbilitySystemComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortActiveMontageDecisionWindow> DecisionWindowStack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer GameplayTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FText DisplayName;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FDamagerInfo> Damagers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FDamageDoneInfo> DamageDone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FDamageDoneSourceInfo> TotalDamageDoneTrackers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FDamageDoneTargetInfo> TargetDamageDoneTrackers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float DamageDoneLastAtTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float TotalPlayerDamageDealt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortHealthBarIndicator* HealthBarIndicator;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FGameplayTag CurrentCalloutTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCalloutEntry> CalloutEntries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HealthBarWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HealthBarHeightMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush SpottedBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector SpottedIconOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ClientNonRenderedAnimUpdateRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxEvalRateForInterpolation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> AnimUpdateRateVisibleMaxDistanceFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, int32> LODToFrameSkipMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Sentence, meta=(AllowPrivateAccess=true))
    FFortConversationSentence CurrentSentence;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPawnHealthChanged OnPawnHealthChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAthenaBatchedDamageGameplayCues_Shared AccumulatedBatchData_Shared;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAthenaBatchedDamageGameplayCues_NonShared AccumulatedBatchData_NonShared;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayCueParameters BatchedGameplayCueParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer ReplayItemActions;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer HidingVisibilityTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer HidingTransitionVisibilityTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPegasusGameEventCollector* PegasusTimelineCollector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortAthenaAILODComponent* AILODComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FClientAILODSettings ClientAILODSettings;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<uint32, FRecordedGunshot> RecordedGunshots;
    
public:
    AFortPawn();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool WillFallFromHeightCauseDamage(float FallDistance) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool WasDBNOOnDeath() const;
    
    UFUNCTION(BlueprintCallable)
    void UnlinkAnimLayer(TSubclassOf<UAnimInstance> AnimLayer);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void TriggerFeedbackEvent(FName EventName, AFortPawn* InstigatorPawn, AFortPawn* Recipient, float OverriddenDelay);
    
    UFUNCTION(BlueprintCallable)
    void StopSpinning();
    
    UFUNCTION(BlueprintCallable)
    void StopPushMomentum();
    
    UFUNCTION(BlueprintCallable)
    void StopBatchedLoopingWeaponActivation();
    
    UFUNCTION(BlueprintCallable)
    void StartSpinning(float Value, bool bFallingOnly, bool bAdjustForInputYawScale);
    
    UFUNCTION(BlueprintCallable)
    void StartPushMomentum(FVector NewPushMomentum, float Duration);
    
    UFUNCTION(BlueprintCallable)
    AFortSoundCameraLensEffect* SpawnSoundLensEffectDirectional(AActor* TrackedActor, FVector HitInfo, float MaxAudibleDistance, EFortSoundIndicatorTypes IndicatorType, const AActor* InstigatingActor, FLinearColor Tint, UTexture* OverrideIcon);
    
    UFUNCTION(BlueprintCallable)
    AFortEmitterCameraLensEffectDirectional* SpawnPooledCameraLensEffectDirectional(TSubclassOf<AFortEmitterCameraLensEffectDirectional> LensEffectEmitterClass, AActor* DamageDealer, const FHitResult& HitInfo, bool bShouldActivate);
    
    UFUNCTION(BlueprintCallable)
    AFortEmitterCameraLensEffectDirectional* SpawnCameraLensEffectDirectional(TSubclassOf<AFortEmitterCameraLensEffectDirectional> LensEffectEmitterClass, AActor* DamageDealer, const FHitResult& HitInfo, bool bDeferSpawn);
    
    UFUNCTION(BlueprintCallable)
    AEmitterCameraLensEffectBase* SpawnCameraLensEffect(TSubclassOf<AEmitterCameraLensEffectBase> LensEffectEmitterClass);
    
protected:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintNativeEvent)
    bool ShouldDie(float Damage, AController* EventInstigator, AActor* DamageCauser);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetSpawnSpot(AActor* InSpawnSpot);
    
    UFUNCTION(BlueprintCallable)
    void SetSignalInStorm(float NewSignalInStormValue);
    
    UFUNCTION(BlueprintCallable)
    void SetShield(float NewShieldValue);
    
    UFUNCTION(BlueprintCallable)
    void SetPawnVisibilityControllerOnly(const bool bNewHidden, const bool bPropagateToWeapon);
    
    UFUNCTION(BlueprintCallable)
    void SetPawnVisibility(const bool bNewHidden, const bool bPropagateToWeapon);
    
    UFUNCTION(BlueprintCallable)
    void SetPawnAndControlRotation(FRotator NewRotation);
    
    UFUNCTION(BlueprintCallable)
    void SetMovementSpeedMultiplier(float NewMovementSpeedVal);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxSignalInStorm(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxShield(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxHealth(float NewHealthVal);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetIsKnockedBack(bool bKnockback);
    
    UFUNCTION(BlueprintCallable)
    void SetHolsterWeapon(bool bHolster, bool bPlayEquipAnim, FName HolsterId, bool bForce);
    
    UFUNCTION(BlueprintCallable)
    void SetHealth(float NewHealthVal);
    
    UFUNCTION(BlueprintCallable)
    void SetGravityMultiplier(float NewGravityVal);
    
    UFUNCTION(BlueprintCallable)
    void SetGravityJumpMultipliers(float NewGravityVal, float NewVehicleGravityVal, float NewJumpZ, float NewJumpHorizontalAcceleration, float NewJumpHorizontalVelocity);
    
    UFUNCTION(BlueprintCallable)
    void SetFNameBasedOnHitDirection(const FVector& HitDirection, FName NameResult, FName NameFront, FName NameBack, FName NameLeft, FName NameRight);
    
    UFUNCTION(BlueprintCallable)
    void SetFallingHeight(float FromHeight);
    
    UFUNCTION(BlueprintCallable)
    void SetControlRecoveryBehavior(EFortControlRecoveryBehavior NewBehavior);
    
    UFUNCTION(BlueprintCallable)
    bool SetCommonWaterFXParams(UFXSystemComponent* FXComponent, const bool bUpdateWaveData, const bool bUpdatePlaneData, const bool bUpdateSurfaceData);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetCallout(const FGameplayTag& CalloutTagToSet, float Duration);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetAimAssistTargetOverride(const USceneComponent* InOverride);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerTeleportNearLocation(FVector ActorLocation);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerInternalEquipWeapon(AFortWeapon* Weap);
    
public:
    UFUNCTION(BlueprintCallable)
    void SafeHolsterWeapon(bool bHolster, bool bPlayEquipAnim, FName HolsterId, bool bForce);
    
    UFUNCTION(BlueprintCallable)
    void ResetFallingHeight();
    
    UFUNCTION(BlueprintCallable)
    void RemoveWeaponTraceIgnoreActor(AActor* ActorToRemove);
    
protected:
    UFUNCTION(BlueprintCallable)
    void RemoveNonReplicatedTagToPawn(const FGameplayTag& Tag);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RemoveCallout(const FGameplayTag& CalloutTagToRemove);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RegisterAdditionalGameplayModifiers(const TArray<UFortGameplayModifierItemDefinition*>& ModifierDefinitions);
    
    UFUNCTION(BlueprintCallable)
    void PrototypeCharacterMovement(TEnumAsByte<EMovementMode> MovementMode, FVector LaunchVelocity);
    
    UFUNCTION(BlueprintCallable)
    void PooledCameraLensEffectCompleted(UParticleSystemComponent* FinishedComponent);
    
    UFUNCTION(BlueprintCallable)
    void PlaySwimmingSound(TEnumAsByte<EFortSwimmingAudioType::Type> SoundType);
    
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void PlaySound(USoundBase* Sound, float VolumeMultiplier, float PitchMultiplier);
    
    UFUNCTION(BlueprintCallable)
    float PlayLocalAnimMontage(UAnimMontage* NewAnimMontage, float InPlayRate, FName StartSectionName, bool bNoBlend);
    
    UFUNCTION(BlueprintCallable)
    void PlayFootStepSound(int32 FootDown);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool PickUpActor(AActor* PickupTarget, const UFortDecoItemDefinition* PlacementDecoItemDefinition);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PawnUniqueIDSet();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void PawnStopFire(uint8 FireModeNum);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void PawnStartFire(uint8 FireModeNum);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWeaponEquipped(AFortWeapon* NewWeapon, AFortWeapon* PrevWeapon);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTeleported();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintImplementableEvent)
    void OnStunned();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_WeaponActivated();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_VocalChords();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_TeleportCounter();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_StormShieldComponent();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Sentence();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ReplicatedWaterBody();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_PushMomentum();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_PawnUniqueID();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MovingEmoteFollowingOnly();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MovingEmote();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_LastReplicatedEmoteExecuted();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_LandingFlashCount();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_JumpFlashCount();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_IsKnockedBack();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsDBNO();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_EmoteWalkSpeed();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_DamageZoneActiveBitMask();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentWeapon(AFortWeapon* OldWeapon);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_bWeaponHolstered();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintImplementableEvent)
    void OnOutOfControlResistanceServer(float ImpactDamageDone, const FGameplayTagContainer& SourceTags, const FGameplayEffectContextHandle& EffectContext, AController* EffectInstigator, AActor* EffectCauser);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnMontageStarted(UAnimMontage* Montage);
    
    UFUNCTION(BlueprintCallable)
    void OnMontageEnded(UAnimMontage* Montage, bool bInterrupted);
    
    UFUNCTION(BlueprintCallable)
    void OnMontageBlendingOut(UAnimMontage* Montage, bool bInterrupted);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool OnlySpinWhenFalling() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnExitedWaterBody(AFortWaterBodyActor* WaterBody, bool bIsLastBody);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEnteredWaterBody(AFortWaterBodyActor* WaterBody, bool bIsFirstBody);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEndWaterInteraction(FVector PreviousWaterSurfaceLocation, float WaterDepth);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDisplaySentence(const FText& SpeechText);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintImplementableEvent)
    void OnDeathServer(float Damage, const FGameplayTagContainer& DamageTags, FVector Momentum, const FHitResult& HitInfo, AController* InstigatedBy, AActor* DamageCauser, FGameplayEffectContextHandle EffectContext);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintNativeEvent)
    void OnDeathPlayEffects(float Damage, const FGameplayTagContainer& DamageTags, FVector Momentum, const FHitResult& HitInfo, AFortPawn* InstigatedBy, AActor* DamageCauser, FGameplayEffectContextHandle EffectContext);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDamageZoneStatusChanged(EFortDamageZone Zone, bool bStatus);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintImplementableEvent)
    void OnDamageServer(float Damage, const FGameplayTagContainer& DamageTags, FVector Momentum, const FHitResult& HitInfo, AController* InstigatedBy, AActor* DamageCauser, FGameplayEffectContextHandle EffectContext);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void OnDamagePlayEffects(float Damage, const FGameplayTagContainer& DamageTags, FVector Momentum, const FHitResult& HitInfo, AFortPawn* InstigatedBy, AActor* DamageCauser, FGameplayEffectContextHandle EffectContext);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnClearSentence();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBumpPushedPawn(AFortPawn* InstigatedBy, float PushTimeLeft);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void OnBuildingHitPlayEffects(float Damage, const FGameplayTagContainer& DamageTags, FVector Momentum, const FHitResult& HitInfo, FGameplayEffectContextHandle EffectContext, bool bPlayerPlaced);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBeginWaterInteraction(FVector WaterSurfaceLocation, float WaterDepth);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBaseChanged(AActor* NewBase);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnAllMontageInstancesEnded();
    
public:
    UFUNCTION(NetMulticast, Unreliable)
    void NetMulticast_InvokeGameplayCuesExecuted_WithParams(const FGameplayTagContainer GameplayCueTags, FPredictionKey PredictionKey, FGameplayCueParameters GameplayCueParameters);
    
    UFUNCTION(NetMulticast, Unreliable)
    void NetMulticast_InvokeGameplayCuesExecuted(const FGameplayTagContainer GameplayCueTags, FPredictionKey PredictionKey, FGameplayEffectContextHandle EffectContext);
    
    UFUNCTION(NetMulticast, Unreliable)
    void NetMulticast_InvokeGameplayCuesAddedAndWhileActive_WithParams(const FGameplayTagContainer GameplayCueTags, FPredictionKey PredictionKey, FGameplayCueParameters GameplayCueParameters);
    
    UFUNCTION(NetMulticast, Unreliable)
    void NetMulticast_InvokeGameplayCueExecuted_WithParams(const FGameplayTag GameplayCueTag, FPredictionKey PredictionKey, FGameplayCueParameters GameplayCueParameters);
    
    UFUNCTION(NetMulticast, Unreliable)
    void NetMulticast_InvokeGameplayCueExecuted_FromSpec(const FGameplayEffectSpecForRPC Spec, FPredictionKey PredictionKey);
    
    UFUNCTION(NetMulticast, Unreliable)
    void NetMulticast_InvokeGameplayCueExecuted(const FGameplayTag GameplayCueTag, FPredictionKey PredictionKey, FGameplayEffectContextHandle EffectContext);
    
    UFUNCTION(NetMulticast, Unreliable)
    void NetMulticast_InvokeGameplayCueAddedAndWhileActive_WithParams(const FGameplayTag GameplayCueTag, FPredictionKey PredictionKey, FGameplayCueParameters GameplayCueParameters);
    
    UFUNCTION(NetMulticast, Unreliable)
    void NetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec(const FGameplayEffectSpecForRPC& Spec, FPredictionKey PredictionKey);
    
    UFUNCTION(NetMulticast, Unreliable)
    void NetMulticast_InvokeGameplayCueAdded_WithParams(const FGameplayTag GameplayCueTag, FPredictionKey PredictionKey, FGameplayCueParameters Parameters);
    
    UFUNCTION(NetMulticast, Unreliable)
    void NetMulticast_InvokeGameplayCueAdded(const FGameplayTag GameplayCueTag, FPredictionKey PredictionKey, FGameplayEffectContextHandle EffectContext);
    
    UFUNCTION(NetMulticast, Unreliable)
    void NetMulticast_Athena_BatchedDamageCues(FAthenaBatchedDamageGameplayCues_Shared SharedData, FAthenaBatchedDamageGameplayCues_NonShared NonSharedData);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastUnlinkAnimLayer(TSubclassOf<UAnimInstance> AnimLayer);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastLinkAnimLayer(TSubclassOf<UAnimInstance> AnimLayer);
    
    UFUNCTION(BlueprintCallable)
    void MovingEmoteStopped();
    
    UFUNCTION(BlueprintCallable)
    void MaxHealthStateChanged(bool bIsMaxHealth);
    
    UFUNCTION(BlueprintCallable)
    void LogChugSplashEvent();
    
    UFUNCTION(BlueprintCallable)
    void LinkAnimLayer(TSubclassOf<UAnimInstance> AnimLayer);
    
    UFUNCTION(BlueprintCallable)
    void LaunchCharacterJump(FVector LaunchVelocity, bool bXYOverride, bool bZOverride, bool bIgnoreFallDamage, bool bPlayFeedbackEvent);
    
protected:
    UFUNCTION(BlueprintCallable)
    void KillDisconnectedPawn();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWeaponHolstered() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSurfaceSwimming() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStaggered() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSpinning() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInsideHidingProp(const bool bIncludeTransition) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFrontalHit(const FVector& HitDirection) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDead() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDBNO() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAllowChainStun() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActionInputIgnored() const;
    
    UFUNCTION(BlueprintCallable)
    void InitializeDeathHitSocket(FVector WorldLocation, FVector WorldNormal);
    
    UFUNCTION(BlueprintCallable)
    void HideBodyOnDeath();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasCurrentMontage() const;
    
    UFUNCTION(BlueprintCallable)
    void HandleIsHiddenForDeath();
    
    UFUNCTION(BlueprintCallable)
    void HandleIsDying();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetWaterImmersionDepth() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetTargetingTransform(EFortAbilityTargetingSource Source, UFortGameplayAbility* SourceAbility) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetSphericalHitDirection(const FVector& HitDirection, float& Azimuth, float& Elevation) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSignalInStorm() const;
    
    UFUNCTION(BlueprintCallable)
    float GetShieldPercent() const;
    
    UFUNCTION(BlueprintCallable)
    float GetShieldOrHealthPercent();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetShield() const;
    
    UFUNCTION(BlueprintCallable)
    UMaterialInstanceDynamic* GetPawnMID(int32 ElementIndex);
    
    UFUNCTION(BlueprintCallable)
    AActor* GetMyMovementBaseActor();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetMovementPredictionPosition(float PredictionDeltaTime) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMeleeReticleStrikeAngle(bool bPrimaryInput) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMeleeComboCounter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxSignalInStorm() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxShield() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxHealth() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxDistanceWithoutFallDamage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxControlResistance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APlayerController* GetLocalViewingPlayerController() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLocalSpin() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetKnockbackThreshold() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetKnockbackMultiplier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetIgnoreFallDamageComponentTag() const;
    
    UFUNCTION(BlueprintCallable)
    float GetHealthPercent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHealth() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAudioComponent* GetFirstValidEmoteAudioComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortAIEncounterInfo* GetEncounterInfo() const;
    
    UFUNCTION(BlueprintCallable)
    USkeletalMeshComponent* GetEmotePropAttachMesh();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAudioComponent* GetEmoteAudioComponent(FName SoundId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetDefaultTargetingRotation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetDefaultTargetingOrigin() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFortDamageZone GetDamageZone(const FHitResult& InHitResult) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFortWaterBodyActor* GetCurrentWaterBody() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetCurrentSentenceSpeechText() const;
    
public:
    UFUNCTION(BlueprintCallable)
    float GetCurrentMontageSectionTimeLeft();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetControlResistance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFortControlRecoveryBehavior GetControlRecoveryBehavior() const;
    
    UFUNCTION(BlueprintCallable)
    USkeletalMeshComponent* GetAssetSkeletalMeshComponentAttachment(FName SocketName);
    
protected:
    UFUNCTION(BlueprintCallable)
    void GameplayCue_InstantDeath(TEnumAsByte<EGameplayCueEvent::Type> EventType, FGameplayCueParameters Parameters);
    
    UFUNCTION(BlueprintCallable)
    void GameplayCue_Damage(TEnumAsByte<EGameplayCueEvent::Type> EventType, FGameplayCueParameters Parameters);
    
    UFUNCTION(BlueprintCallable)
    void GameplayCue(TEnumAsByte<EGameplayCueEvent::Type> EventType, FGameplayCueParameters Parameters);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ForceKill(FGameplayTag DeathReason, AController* KillerController, AActor* KillerActor);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    AFortWeapon* EquipWeaponDefinition(const UFortWeaponItemDefinition* WeaponData, FGuid ItemEntryGuid);
    
    UFUNCTION(BlueprintCallable)
    bool EquipBestWeapon();
    
    UFUNCTION(BlueprintCallable)
    void EmoteStopped(UFortItemDefinition* MontageItemDef);
    
    UFUNCTION(BlueprintCallable)
    void EmoteStarted(UFortItemDefinition* MontageItemDef);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void DoFatalDamage(UAbilitySystemComponent* KillerAbilitySystemComponent);
    
    UFUNCTION(BlueprintCallable)
    void DetachAssetFromSocket(FName SocketName);
    
private:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientInternalEquipWeapon(AFortWeapon* Weap);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanSpawnSoundVisuals() const;
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void BroadcastUnlinkAnimLayer(TSubclassOf<UAnimInstance> AnimLayer);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void BroadcastLinkAnimLayer(TSubclassOf<UAnimInstance> AnimLayer);
    
    UFUNCTION(BlueprintCallable)
    void AttachAssetToSocket(const FAssetAttachment& InAttachment);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ApplyKnockback(float KnockbackMagnitude, float KnockbackZAngle, FVector ImpulseDir);
    
    UFUNCTION(BlueprintCallable)
    void AnimMontage_LocalSetNextSectionName(UAnimMontage* AnimMontage, FName SectionName, FName NextSectionName);
    
    UFUNCTION(BlueprintCallable)
    bool AnimMontage_LocalJumpToSectionName(FName SectionName);
    
    UFUNCTION(BlueprintCallable)
    int32 AnimMontage_LocalJumpToRandomSection();
    
    UFUNCTION(BlueprintCallable)
    void AlignRotationToHitDirection(const FVector& HitDirection);
    
    UFUNCTION(BlueprintCallable)
    void AddWeaponTraceIgnoreActor(AActor* ActorToIgnore);
    
protected:
    UFUNCTION(BlueprintCallable)
    void AddNonReplicatedTagToPawn(const FGameplayTag& Tag);
    
    
    // Fix for true pure virtual functions not being implemented
public:
    UFUNCTION()
    uint8 GetTeam() const override PURE_VIRTUAL(GetTeam, return 0;);
    
    UFUNCTION(BlueprintCallable)
    bool HasMatchingGameplayTag(FGameplayTag TagToCheck) const override PURE_VIRTUAL(HasMatchingGameplayTag, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool HasAnyMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(HasAnyMatchingGameplayTags, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool HasAllMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(HasAllMatchingGameplayTags, return false;);
    
    UFUNCTION(BlueprintCallable)
    void GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(GetOwnedGameplayTags,);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void ForwardGameplayCueToParent() override PURE_VIRTUAL(ForwardGameplayCueToParent,);
    
    UFUNCTION(BlueprintCallable)
    TSubclassOf<UGameplayEffect> GetShieldRegenGameplayEffectClass() const override PURE_VIRTUAL(GetShieldRegenGameplayEffectClass, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    UGameplayEffect* GetShieldRegenGameplayEffect() const override PURE_VIRTUAL(GetShieldRegenGameplayEffect, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    UGameplayEffect* GetShieldRegenDelayGameplayEffect() const override PURE_VIRTUAL(GetShieldRegenDelayGameplayEffect, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    TSubclassOf<UGameplayEffect> GetHealthRegenGameplayEffectClass() const override PURE_VIRTUAL(GetHealthRegenGameplayEffectClass, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    UGameplayEffect* GetHealthRegenGameplayEffect() const override PURE_VIRTUAL(GetHealthRegenGameplayEffect, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    UGameplayEffect* GetHealthRegenDelayGameplayEffect() const override PURE_VIRTUAL(GetHealthRegenDelayGameplayEffect, return NULL;);
    
};

