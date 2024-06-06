#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/CurveTable.h"
#include "Engine/EngineTypes.h"
#include "Engine/SpringInterpolator.h"
#include "Engine/EngineTypes.h"
#include "Components/TimelineComponent.h"
#include "UObject/NoExportTypes.h"
#include "Abilities/GameplayAbilityTypes.h"
#include "AttributeSet.h"
#include "AttributeSet.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "Styling/SlateBrush.h"
#include "AbilitySystemInitializedDelegateDelegate.h"
#include "CarriedObjectAttachmentInfo.h"
#include "CharacterPartChangedDelegate.h"
#include "CustomCharacterPartOwnerInterface.h"
#include "EColorSwatchType.h"
#include "EFortAppliedSwapItemAndVariantState.h"
#include "EFortBuildingState.h"
#include "EFortCustomBodyType.h"
#include "EFortCustomCharmType.h"
#include "EFortCustomGender.h"
#include "EFortCustomMovement.h"
#include "EFortCustomPartType.h"
#include "EFortFacialAnimTypes.h"
#include "EFortPawnDisplayContext.h"
#include "EFortPawnStasisMode.h"
#include "EItemInteractionStatus.h"
#include "EItemInteractionType.h"
#include "ETryExitVehicleBehavior.h"
#include "FortAppliedSwapItemAndVariantData.h"
#include "FortAthenaLoadout.h"
#include "FortAthenaVehicleInputStateReliable.h"
#include "FortAthenaVehicleInputStateUnreliable.h"
#include "FortCarriedObjectHolderInterface.h"
#include "FortCharacterPartsRepMontageInfo.h"
#include "FortClientObservedStatArray.h"
#include "FortDBNOCarryHoisterData.h"
#include "FortInteractInterface.h"
#include "FortPawn.h"
#include "FortPickupRequestInfo.h"
#include "FortSwapItemAndVariantData.h"
#include "FortUICameraFrameTargetInterface.h"
#include "IgnoreCollisionActor.h"
#include "InteractionType.h"
#include "NewPlayerStateDelegateDelegate.h"
#include "OnActivateAbilityDelegate.h"
#include "OnBallooningGravityCeilingChangedDelegate.h"
#include "OnBeginParachuteMovementEventDelegate.h"
#include "OnBeginSkydivingEventDelegate.h"
#include "OnDamageComboIncrementDelegate.h"
#include "OnDamageComboResetDelegate.h"
#include "OnEmoteInteractedDelegate.h"
#include "OnEndParachuteMovementEventDelegate.h"
#include "OnEndSkydivingEventDelegate.h"
#include "OnEndedInteractSearchDelegate.h"
#include "OnEnteredAircraftDelegate.h"
#include "OnFinishedCharacterCustomizationDelegate.h"
#include "OnFiringRangedWeaponDelegate.h"
#include "OnFootstepEventDelegate.h"
#include "OnHeldObjectChangedDelegate.h"
#include "OnInstantInteractSearchDelegate.h"
#include "OnPawnEnterWaterDelegate.h"
#include "OnPlayerPawnPosessionChangedDelegate.h"
#include "OnPossessedPropDelegate.h"
#include "OnSafeZoneOccupancyChangedDelegate.h"
#include "OnStartedInteractSearchDelegate.h"
#include "PreviouslyAppliedVariantData.h"
#include "RepFortMeshAttachment.h"
#include "ReplicatedMontagePair.h"
#include "SlipperySlopeParams.h"
#include "Templates/SubclassOf.h"
#include "VehiclePawnState.h"
#include "VortexParams.h"
#include "ZiplinePawnState.h"
#include "ZiplineStateChangedDelegate.h"
#include "FortPlayerPawn.generated.h"

class AActor;
class ABuildingGameplayActor;
class ABuildingGameplayActorPlayerPropAttachment;
class AController;
class ACustomCharacterPartModifier;
class AFortAIPawn;
class AFortAthenaVehicle;
class AFortAthenaZipline;
class AFortPickup;
class AFortPlayerCharm;
class AFortPlayerControllerGameplay;
class AFortPlayerParachute;
class AFortPlayerPawn;
class AFortPlayerPet;
class AFortPlayerPetRepState;
class AFortRemoteControlledPawnAthena;
class AFortSkyTube;
class AFortWaterBodyActor;
class APawn;
class IFortArmoredInterface;
class UFortArmoredInterface;
class IFortVehicleInterface;
class UFortVehicleInterface;
class UActorComponent;
class UAnimInstance;
class UAnimMontage;
class UAthenaCharmItemDefinition;
class UAthenaCosmeticItemDefinition;
class UAthenaGliderItemDefinition;
class UAthenaPetItemDefinition;
class UAudioComponent;
class UBoxComponent;
class UBuildingEditModeMetadata;
class UCurveFloat;
class UCustomCharacterPart;
class UCustomColorComponent;
class UCustomColorSwatch;
class UCustomPlayerComponent;
class UFXSystemAsset;
class UFXSystemComponent;
class UFortAnimNotifyState_RootMotionInterrupt;
class UFortCustomizationAssetLoader;
class UFortFootstepAudioBank;
class UFortHero;
class UFortHeroType;
class UFortMontageItemDefinitionBase;
class UFortPawnComponent_Tether;
class UFortPawnScriptedBehavior;
class UFortUnderwaterDamageComponent;
class UFortVisibilityComponent;
class UFortWeaponAnimSet;
class UFortWorldItemDefinition;
class UGameplayAbility;
class UGameplayEffect;
class UInputComponent;
class UMaterialInstanceDynamic;
class UNiagaraSystem;
class UParticleSystem;
class UParticleSystemComponent;
class UPostProcessComponent;
class UPrimitiveComponent;
class USceneComponent;
class USkeletalMesh;
class USkeletalMeshComponent;
class USkeletalMeshComponentBudgeted;
class USoundBase;
class UTexture;

UCLASS(Blueprintable, MinimalAPI)
class AFortPlayerPawn : public AFortPawn, public IFortCarriedObjectHolderInterface, public IFortInteractInterface, public ICustomCharacterPartOwnerInterface, public IFortUICameraFrameTargetInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_VehicleInputStateReliableForReplay, meta=(AllowPrivateAccess=true))
    FFortAthenaVehicleInputStateReliable VehicleInputStateReliable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 bIsNearSafeZoneEdge: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bPlayingSafeZoneEffects: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDoSafeZoneCleanup: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsSwimmingAnimLayerLinked: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsSprintJump: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bHasDisableSprintTag: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bDisableSwimSprintCancel: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 bIsWaterJump: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 bIsWaterSprintBoost: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 bIsWaterSprintBoostPending: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bPlayingPassengerToPassengerAnimation: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bPlayingDriverToPassengerAnimation: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_IsTargeting, meta=(AllowPrivateAccess=true))
    uint8 bIsTargeting: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsTargetingConsumableThrow: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsSwappingCharacterParts: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bBalloonMovementActivated: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsScriptedBot: 1;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bBuildHotfix: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLightingChannels FortPlayerPawnLightingChannels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=HandleInStasis, meta=(AllowPrivateAccess=true))
    EFortPawnStasisMode StasisMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EFortBuildingState::Type> BuildingState;
    
    UPROPERTY(EditAnywhere, Transient, ReplicatedUsing=OnRep_AccelerationZPack, meta=(AllowPrivateAccess=true))
    int8 AccelerationZPack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* ParachuteDirectionalSpeedMultiplierCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* SkydivingDirectionalSpeedMultiplierCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* BallooningDirectionalSpeedMultiplierCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* DirectionalSpeedMultiplierCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimumTimeBetweenSteps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LastStepTime;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFootstepEvent OnFootstepEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPawnEnterWater OnPawnEnterWater;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsInWaterVolume, meta=(AllowPrivateAccess=true))
    bool bIsInWaterVolume;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNotifyBlueprintWhenLandscapeTeleporting;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    uint8 CachedTeamControllingRC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 BalloonActiveCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bParachuteDeployFixedVerticalDistance: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsSkydiving, meta=(AllowPrivateAccess=true))
    bool bIsSkydiving;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsParachuteOpen, meta=(AllowPrivateAccess=true))
    bool bIsParachuteOpen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bLocalIsSkydiving: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bLocalIsParachuteForcedOpen: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsParachuteForcedOpen, meta=(AllowPrivateAccess=true))
    uint8 bIsParachuteForcedOpen: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsSkydivingFromBus, meta=(AllowPrivateAccess=true))
    uint8 bIsSkydivingFromBus: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 bIsSkydivingFromLaunchPad: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bPendingSkydiveLaunch: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsInVortex: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ReplicatedIsInVortex, meta=(AllowPrivateAccess=true))
    uint8 bReplicatedIsInVortex: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsInSlipperyMovement: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ReplicatedIsInSlipperyMovement, meta=(AllowPrivateAccess=true))
    uint8 bReplicatedIsInSlipperyMovement: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsBelowAutoDeployTestHeight: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsSlopeSliding, meta=(AllowPrivateAccess=true))
    uint8 bIsSlopeSliding: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 bIsProxySimulationTimedOut: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsPedestalHero: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ReplicatedInGliderRedeploy, meta=(AllowPrivateAccess=true))
    uint8 bInGliderRedeploy: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bLocalInGliderRedeploy: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bBeingRepossessed: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bInitAbilitySystemComponentFromPlayerState: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_StartedInteractSearch, meta=(AllowPrivateAccess=true))
    uint8 bStartedInteractSearch: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bPawnLODDirty: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsUsingJetpack: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsPlayingEmote: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bShowingOverdriveEffect: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 bIsRespawning: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 bIsRespawningInAir: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bInitializedPostRepPlayerState: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bEnableCharacterPartRigidBodyNode: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bInitializedCharacterPartRBANSettings: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsLocalViewTarget: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bHasWaterParticleSystem: 1;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsInFrontEndHologram: 1;
    
protected:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> HeldObject;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bForceMoveRelativeToCameraRotation: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_WaitingForEmoteInteraction, meta=(AllowPrivateAccess=true))
    uint8 bIsWaitingForEmoteInteraction: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_IsEmoteLeader, meta=(AllowPrivateAccess=true))
    uint8 bIsEmoteLeader: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    uint8 bShouldSyncAnimationWithEmoteLeader: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    uint8 bShouldJitterAnimationSyncWithEmoteLeader: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    uint8 bDoubleFileEmoteSecondLine: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_LockGroupEmoteLeaderRotation, meta=(AllowPrivateAccess=true))
    uint8 bLockGroupEmoteLeaderRotation: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_GroupEmoteLookTarget, meta=(AllowPrivateAccess=true))
    AFortPlayerPawn* GroupEmoteLookTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AFortPlayerPawn*> GroupEmoteFollowers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float GroupEmoteLeaderRotationYawOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRotator GroupEmoteLookTargetRotationLeader;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GroupEmoteMaximumZDifference;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimMontage* CurrentMontagerLeader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimMontage* CurrentSyncedMontage;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bCharacterPartsCastIndirectShadows: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EFortCustomGender CharacterGender;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EFortCustomBodyType::Type> CharacterBodyType;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float JumpLastActivatedTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector PreviousPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector PreviousVelocity;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CrouchMeshOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CustomMeshHeightAdjust;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CustomMeshHeightAdjustLerpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CustomMeshHeightAdjustLerpTarget;
    
    UPROPERTY(EditAnywhere, ReplicatedUsing=OnRep_CustomMeshHeightAdjustTarget, meta=(AllowPrivateAccess=true))
    uint16 ReplicatedCustomMeshHeightAdjustTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_VehicleInputStateUnreliable, meta=(AllowPrivateAccess=true))
    FFortAthenaVehicleInputStateUnreliable VehicleInputStateUnreliable;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsInAnyStorm, meta=(AllowPrivateAccess=true))
    uint8 bIsInAnyStorm: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsInsideSafeZone, meta=(AllowPrivateAccess=true))
    uint8 bIsInsideSafeZone: 1;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> SafeZoneAppliedGE;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> SelfReviveGameplayEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> TeammateReviveGameplayEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat SetByCallerReviveHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DBNOInteractionCollisionProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector DBNOInteractionBoxExtent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DBNODeferTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UBoxComponent* DBNOInteractCollisionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag EventReviveTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AggroRangeOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SetByCallerReviveSignalInStorm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TScriptInterface<IFortArmoredInterface> ArmoredInterface;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UBuildingEditModeMetadata* LastBuildingMetadata;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float SprintCancelTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float WaterSprintBoostAllowedTimer;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_bHasStartedFloating, meta=(AllowPrivateAccess=true))
    bool bHasStartedFloating;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FZiplinePawnState ZiplineState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCurveTableRowHandle ZiplineJumpDampening;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCurveTableRowHandle ZiplineJumpStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat ZiplineJumpActivateDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat ZiplineRentryProtectionDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ZiplineSocketZOffset;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FZiplineStateChanged ZiplineStateChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat EnableSwimSprintDiveCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat SwimSprintDiveCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat SwimDiveBoostTimeThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float ClientSwimDiveInputTime;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool bCanPredictJumpApex;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AFortAIPawn*> AbilityAITargets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* UnableToPerformActionMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* UnableToPerformActionSound;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveSoundStimulusBroadcastInterval;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float EmoteStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float EmoteRandomNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bPlayingPassengerToDriverAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float VehicleSpeedAtTimeOfJump;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_InVehicle, meta=(AllowPrivateAccess=true))
    FVehiclePawnState VehicleStateRep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_UpdateContextTracker, meta=(AllowPrivateAccess=true))
    AFortPlayerControllerGameplay* InteractingPCRep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVehiclePawnState VehicleStateLocal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVehiclePawnState VehicleStateLastTick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortPawnComponent_Tether* TetherComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float PendingTetherLaunch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float TetherJumpLastTime;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSupportsTetheredMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABuildingGameplayActor* BalloonRope;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPossessedProp OnPossessedProp;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_PossessedProp, meta=(AllowPrivateAccess=true))
    ABuildingGameplayActorPlayerPropAttachment* PossessedProp;
    
public:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int64 SlopeCameraOffsetFrameCounter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVectorRK4SpringInterpolator SlopeCameraOffsetInterpolator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LargeBodyTypeTargetingOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UInputComponent* VehicleInputComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* BluePrintPlaceAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* BluePrintEditAnimation;
    
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStartedInteractSearch OnStartedInteractSearch;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEndedInteractSearch OnEndedInteractSearch;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInstantInteractSearch OnAttemptedInstantInteractSearch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EmoteInteractionCollisionProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector EmoteInteractionBoxExtent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UBoxComponent* EmoteInteractCollisionComponent;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterPartChanged OnPartChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* BlueprintPaperMID;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimeline BlueprintPaperPulseTimeline;
    
    UPROPERTY(EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCustomColorComponent* AccessoryColorSwatchHandler[6];
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortHero* Hero;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UFortHeroType> OvrHeroType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EFortPawnDisplayContext DisplayContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCustomPlayerComponent* HACK_CustomPRIComponent;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCustomCharacterPart* CharacterParts[6];
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCustomColorSwatch* CharacterColorSwatches[2];
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCustomColorSwatch* CharacterPartColorSwatches[6];
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAthenaCharmItemDefinition* CharacterCharms[4];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UCustomCharacterPart*> RequiredVariantParts;
    
protected:
    UPROPERTY(EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponentBudgeted* CharacterPartSkeletalMeshComponents[6];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AFortPlayerCharm*> CharacterCharmActors;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int8 CharacterPartSMHiddenRefCount[6];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_BaseCosmeticLoadout, meta=(AllowPrivateAccess=true))
    FFortAthenaLoadout BaseCosmeticLoadout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFortAthenaLoadout AppliedCosmeticLoadout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_AppliedSwaps, meta=(AllowPrivateAccess=true))
    TArray<FFortAppliedSwapItemAndVariantData> AppliedSwaps;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFortAthenaLoadout CosmeticLoadout;
    
    UPROPERTY(EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint32 ServerLoadoutChangeSync;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowClientLoadoutChangeSync;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCustomCharacterPart* PreviousCharacterParts[6];
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ACustomCharacterPartModifier* CharacterPartModifiers[6];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_CharPartAnimMontageInfo, meta=(AllowPrivateAccess=true))
    FFortCharacterPartsRepMontageInfo RepCharPartAnimMontageInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FFortClientObservedStatArray ClientObservedStats;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_AnimBPOverride, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAnimInstance> AnimBPOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAnimInstance> OriginalAnimBP;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* OnCrouchStartSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* OnCrouchEndSound;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_FootstepBankOverride, meta=(AllowPrivateAccess=true))
    UFortFootstepAudioBank* FootstepBankOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortFootstepAudioBank* OriginalFootstepBank;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AFortPickup*> QueuedAutoPickups;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIgnoreCollisionActor> IgnoreActors;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat AutoPickupDropRepickupDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CarriedObjectAttachmentSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PickupSpeedMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush MiniMapIconBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush AboveBelowMiniMapIconBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush FarOffMiniMapIconBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush DBNOMiniMapIconBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor MinimapIconColorSelf;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor MinimapIconColorTeammate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor MinimapIconColorEnemy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxIndicatorVisibilityDistForEnemies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxIndicatorVisibilityDistForAllies;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_DBNOHoisterData, meta=(AllowPrivateAccess=true))
    FFortDBNOCarryHoisterData DBNOHoisterData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_DBNOHoistee, meta=(AllowPrivateAccess=true))
    AFortPlayerPawn* DBNOHoistee;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortWeaponAnimSet* DBNOHoisterAnimSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAnimInstance> DBNOHoisteeAnimClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ThrowCarriedPlayerStrengthXY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ThrowCarriedPlayerStrengthZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DropCarriedPlayerForwardOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DropCarriedPlayerHeightOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DropCarriedPlayerTraceHeight;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowDBNOCarry;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowDBNOCarryEnemies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsBeingDBNOCarried;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsDBNOCarrying;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bRequestedThrowCarriedPlayer;
    
    UPROPERTY(EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint16 PackedReplicatedSlopeAngles;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNewPlayerStateDelegate OnNewPlayerState;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAbilitySystemInitializedDelegate OnAbilitySystemComponentInitialized;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFinishedCharacterCustomization OnFinishedCharacterCustomization;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortCustomizationAssetLoader* CustomizationAssetLoader;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* SpawnParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* SpawnSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsLocalPlayer: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bDamagedEnemy: 1;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDamageComboIncrement OnDamageComboIncrement;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDamageComboReset OnDamageComboReset;
    
public:
    UPROPERTY(EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    uint32 PlayerStatus;
    
    UPROPERTY(EditAnywhere, Transient, ReplicatedUsing=OnRep_AccelerationPack, meta=(AllowPrivateAccess=true))
    uint16 AccelerationPack;
    
protected:
    UPROPERTY(EditAnywhere, ReplicatedUsing=OnRep_ReplicatedAnimMontage, meta=(AllowPrivateAccess=true))
    FGameplayAbilityRepAnimMontage RepAnimMontageInfo;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_RepAnimMontageStartSection, meta=(AllowPrivateAccess=true))
    int32 RepAnimMontageStartSection;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_NetMovementPrioritized, meta=(AllowPrivateAccess=true))
    bool bNetMovementPrioritized;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FReplicatedMontagePair LandingMontagePair;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPreviouslyAppliedVariantData PriorVariantData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFortWorldItemDefinition*> TempWeaponsStack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFortAnimNotifyState_RootMotionInterrupt*> RootMotionInterruptNotifyStack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> RootMotionInterruptMontageStack;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortVisibilityComponent* VisibilityComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPostProcessComponent* BlendablesPostProcessComp;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseControllerRotationYawToRestore: 1;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBeginSkydivingEvent OnBeginSkydivingEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEndSkydivingEvent OnEndSkydivingEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBeginParachuteMovementEvent OnBeginParachuteMovementEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEndParachuteMovementEvent OnEndParachuteMovementEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBallooningGravityCeilingChanged OnBallooningGravityCeilingChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEnteredAircraft OnEnteredAircraft;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerPawnPosessionChanged OnPawnPossessed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerPawnPosessionChanged OnPawnUnpossessed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEmoteInteracted OnEmoteInteracted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSafeZoneOccupancyChanged OnSafeZoneOccupancyChangedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHeldObjectChanged OnHeldObjectPickedUp;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHeldObjectChanged OnHeldObjectDropped;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TEnumAsByte<EFortCustomMovement::Type>, UTexture*> CustomMovementIndicators;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USoundBase* CurrentGliderOpenSound;
    
    UPROPERTY(EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UAudioComponent> CurrentGliderOpenAudioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USoundBase* CurrentGliderCloseSound;
    
    UPROPERTY(EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UAudioComponent> CurrentGliderCloseAudioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ParachuteLockedOpen, meta=(AllowPrivateAccess=true))
    bool bParachuteLockedOpen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bLocalParachuteLockedOpen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_AttachmentMesh, meta=(AllowPrivateAccess=true))
    FRepFortMeshAttachment AttachmentMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponentBudgeted* AttachmentMeshComponent;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortPawnScriptedBehavior* BotScriptedBehavior;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FVortexParams VortexParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ReplicatedSkyTube, meta=(AllowPrivateAccess=true))
    AFortSkyTube* ReplicatedSkyTube;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortSkyTube* CurrentSkyTube;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AFortWaterBodyActor*> IgnoredWaterBodies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortUnderwaterDamageComponent* UnderwaterDamageComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlipperySlopeParams SlipperySlopeParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAthenaGliderItemDefinition* GliderClass;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AFortPlayerPetRepState* PetState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortPlayerPet* CosmeticPetInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortPlayerParachute* ParachuteAttachment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_GliderOverride, meta=(AllowPrivateAccess=true))
    TArray<UAthenaGliderItemDefinition*> GliderOverrideStack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bResetGliderOverrideOnLanding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat ParachuteDeployTraceForGroundDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat LaunchPadParachuteDeployTraceForGroundDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat LaunchPadParachuteDeployTraceForDownwardSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat ParachuteDeployVelocityBlend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ParachuteCooldownToOpen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ParachuteCooldownToClose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat GliderRedeployAllowedRow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat GliderRedeployLateralVelocityMultiplierRow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat GliderRedeployHeighLimitRow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat BalloonFallDamageThresholdVelocityZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAnimInstance> PreDrivingAnimBP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAnimInstance> CurrentVehicleAnimLayerOverlayClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAnimInstance> CurrentSwimmingAnimLayerOverlayClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAnimInstance> DefaultSwimmingAnimLayerOverlayClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeBeforeSwimmingLayerDeactivated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* ParachuteAudioLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ParachuteAndSkydiveAudioFadeInTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ParachuteAndSkydiveAudioFadeOutTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* SkydiveAudioLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* SoundOnParachuteForcedOpen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* SkydivingLoop1P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* SkydivingLoop3P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* ParachuteOpenLoop1P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* ParachuteOpenLoop3P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* SwimmingAudioLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SwimmingAudioFadeOutTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SwimmingAudioInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* SoundOnSwimmingLoop;
    
private:
    UPROPERTY(EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint32 RemoteViewData32;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LastQuickBarSwitchRequestTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CrouchStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CrouchEndTime;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CrouchLerpTime;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MeleeAbilityCooldown;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisallowInterrogation;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisallowInterrogationOnNPC;
    
protected:
    UPROPERTY(EditAnywhere, Transient, ReplicatedUsing=OnRep_ControlledRCPawn, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AFortRemoteControlledPawnAthena> ControlledRCPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_StoredControlRotation, meta=(AllowPrivateAccess=true))
    FRotator StoredControlRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_FacialTypeOverride, meta=(AllowPrivateAccess=true))
    EFortFacialAnimTypes FacialTypeOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float GhostModeExitStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float GhostModeExitDuration;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* PSC_PlayerInWater;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* PSC_PlayerInWaterSurfaceSwimming;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* NiagaraPlayerInWaterBasicAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* NiagaraPlayerInWaterSwimmingAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* NiagaraPlayerWaterHandSplashAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* NiagaraPlayerWaterFootSplashAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* NiagaraPlayerWaterLargePlayerSplashAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* NiagaraPlayerWaterBoostAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FootSplashLeftSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FootSplashRightSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFXSystemComponent* NiagaraPlayerStandingInWater;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFXSystemComponent* NiagaraPlayerSwimmingInWater;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFXSystemComponent* NiagaraPlayerHandSplashInWater;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFXSystemComponent* NiagaraPlayerFootSplashInWaterLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFXSystemComponent* NiagaraPlayerFootSplashInWaterRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFXSystemComponent* NiagaraPlayerJumpSplashInWater;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFXSystemComponent* NiagaraPlayerWaterBoost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bWaterFootSplashActive: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bEnableWaterInteractionEffects: 1;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnActivateAbility OnActivateAbility;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFiringRangedWeapon OnFiringRangedWeapon;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat ConsecutiveWeakSpotResourceBonus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat LastHitWeakSpotResourceBonus;
    
public:
    AFortPlayerPawn();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void VerifySkydivingMatchesServer();
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void UpdatePreviousPositionAndVelocity(float DeltaSeconds, FVector OldLocation, FVector OldVelocity);
    
    UFUNCTION(BlueprintCallable)
    void UpdateGameStateModifiedGravity(float GravityMultiplier);
    
    UFUNCTION(BlueprintCallable)
    void UpdateAimbotDetectionStatus();
    
    UFUNCTION(BlueprintCallable)
    void UnableToPerformAction(bool bPlayMontage, const FGameplayTagContainer& FailedReason);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleGender();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleBodyType();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float TimeFromJumpApex() const;
    
private:
    UFUNCTION(BlueprintCallable, Exec)
    void SwitchToPreviousPart(const FString& PartName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SwitchToNextPart(const FString& PartName);
    
public:
    UFUNCTION(BlueprintCallable)
    void SwapPawnCosmeticItemAndVariant(const FGuid& SwapId, const TArray<FFortSwapItemAndVariantData>& SwapData, bool bAllowActiveHotswap, EFortAppliedSwapItemAndVariantState ForcedSwapState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool SupportsTetheredMovement();
    
    UFUNCTION(BlueprintCallable)
    void StopItemInteractionAbility(const EItemInteractionStatus ItemInteractionStatus);
    
    UFUNCTION(BlueprintCallable)
    void StopFacialAnimationStream();
    
    UFUNCTION(BlueprintCallable)
    void StopCarryingPlayer(bool bFromAbilityCancel);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void StartGhostModeExit(const float InGhostModeExitDuration);
    
    UFUNCTION(BlueprintCallable)
    void StartFloating();
    
protected:
    UFUNCTION(BlueprintCallable)
    void StartedInteractSearch();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldPlayDeathAnimation();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldDriverHaveReticle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool ShouldAllowShadowStanceMaterialsForPartType(EFortCustomPartType PartType) const;
    
    UFUNCTION(BlueprintCallable)
    void SetWeaponOverrideAnimSet(UFortWeaponAnimSet* WeaponOverrideAnimSet);
    
    UFUNCTION(BlueprintCallable)
    void SetVehicleOverrideExit(bool bIgnoreLaunch);
    
    UFUNCTION(BlueprintCallable)
    void SetThrownItemTrajectoryHitResult(const FHitResult& InHitResult);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetTetherPawn(APawn* InTetherPawn);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetStasisMode(EFortPawnStasisMode InStasisMode);
    
    UFUNCTION(BlueprintCallable)
    void SetPreviousVelocity(FVector OldVelocity);
    
    UFUNCTION(BlueprintCallable)
    void SetPreviousPosition(FVector OldPosition);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetPossessedProp(ABuildingGameplayActorPlayerPropAttachment* InPossessedProp);
    
    UFUNCTION(BlueprintCallable)
    void SetPetType(const UAthenaPetItemDefinition* PetToCreate);
    
    UFUNCTION(BlueprintCallable)
    void SetPendingTetherLaunch(float Amount);
    
    UFUNCTION(BlueprintCallable)
    void SetPendingSkydiveLaunch(bool bPending);
    
    UFUNCTION(BlueprintCallable)
    void SetNumActiveBalloons(int32 NewBalloonCount);
    
    UFUNCTION(BlueprintCallable)
    void SetIsInFrontEndHologram(bool bInFrontEndHologram);
    
    UFUNCTION(BlueprintCallable)
    void SetInVortex(bool bNewValue, float UpwardLaunchVelocity, float GravityFloorAltitude, float GravityFloorWidth, float GravityFloorGravityScalar, float GravityFloorTerminalVelocity);
    
    UFUNCTION(BlueprintCallable)
    void SetInSlipperyMovement(bool bIsSlippery);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetHomeActor(AActor* NewActor);
    
    UFUNCTION(BlueprintCallable)
    void SetFortPlayerPawnLightingChannels(bool bChannel0, bool bChannel1, bool bChannel2);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetFirstPersonCamera(bool bNewUseFirstPersonCamera);
    
    UFUNCTION(BlueprintCallable)
    void SetFacialTypeOverride(EFortFacialAnimTypes NewType);
    
    UFUNCTION(BlueprintCallable)
    void SetEquippedArmoredInterface(TScriptInterface<IFortArmoredInterface> InInterface);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetCustomMeshHeightAdjustTarget(int32 HeightAdjust, int32 LerpSpeed);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetClientObservedStatsFromAnotherPawn(AFortPlayerPawn* OtherPawn);
    
    UFUNCTION(BlueprintCallable)
    void SetBalloonRope(ABuildingGameplayActor* InBalloonRope);
    
    UFUNCTION(BlueprintCallable)
    void SetActorHiddenInGameWithGameplayEffect(bool bNewHidden, const TSubclassOf<UGameplayEffect>& HidePawnGameplayEffectClass, bool bRemoveAllOfThisTag);
    
protected:
    UFUNCTION(BlueprintCallable, Server, Unreliable, WithValidation)
    void ServerUpdateVehicleInputStateUnreliable(FFortAthenaVehicleInputStateUnreliable ReliableInput, float Timestamp);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerUpdateVehicleInputStateReliable(FFortAthenaVehicleInputStateReliable ReliableInput);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerUnmarkRespawned();
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerToggleGender();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerToggleBodyType();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerThrowCarriedPlayer();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetAttachment(FRepFortMeshAttachment Attachment);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetAimbotDetection(bool bEnableDetection);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSendZiplineState(const FZiplinePawnState& InZiplineState);
    
public:
    UFUNCTION(BlueprintCallable, Server, Unreliable, WithValidation)
    void ServerSendAimbotDetectionStatus(const TArray<uint8>& Payload);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerRootMotionInterruptNotifyStopMontage(UAnimMontage* MontageToStop);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerReviveFromDBNO(AController* EventInstigator);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerRespawnFromDBNO();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerResetAbilitySystemComponent();
    
    UFUNCTION(BlueprintCallable, Server, Unreliable, WithValidation)
    void ServerPlayUnableToPerformActionMontage();
    
    UFUNCTION(BlueprintCallable)
    AFortAthenaVehicle* ServerOnExitVehicle(ETryExitVehicleBehavior ExitForceBehavior);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerInterrogateDBNOPlayer(AFortPlayerPawn* InDBNOHoistee);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerHoistDBNOPlayer(AFortPlayerPawn* InDBNOHoistee);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerHandlePickupInfo(AFortPickup* Pickup, FFortPickupRequestInfo Params);
    
    UFUNCTION(BlueprintCallable)
    void ServerHandlePickup(AFortPickup* Pickup, float InFlyTime, const FVector InStartDirection, bool bPlayPickupSound);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerEquipLastWeaponOrGadget(bool bForce);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerDropCarriedPlayer();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerCyclePart(EFortCustomPartType Part, bool bNextPart);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerCycleColorSwatch(EColorSwatchType SwatchType, bool bNext);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerCycleAccessoryColorSwatch(EFortCustomPartType Part, bool bNext);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerChoosePart(EFortCustomPartType Part, UCustomCharacterPart* ChosenCharacterPart);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerChooseGender(EFortCustomGender Gender);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SafeZoneStatusChanged();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ReviveFromDBNO(AController* EventInstigator);
    
    UFUNCTION(BlueprintCallable)
    void RestoreDBNOCollisionAfterDrop();
    
    UFUNCTION(BlueprintCallable)
    void ResetGameplayAttributes(const bool bIgnoreStatClamp);
    
    UFUNCTION(BlueprintCallable)
    void ResetClothAndDynamics();
    
    UFUNCTION(BlueprintCallable)
    void RemoveExpiredIgnoredActorsAndCheckForNextTimer();
    
    UFUNCTION(BlueprintCallable)
    void RemoveAttachment();
    
protected:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RemoveAbilityAITarget(AFortAIPawn* InTarget);
    
private:
    UFUNCTION(BlueprintCallable, Exec)
    void RandomizeCharacter(const FString& GenderString);
    
public:
    UFUNCTION(BlueprintCallable)
    void PushFootstepBankOverride(int32 Priority, UFortFootstepAudioBank* InFootstepBankOverride);
    
    UFUNCTION(BlueprintCallable)
    void PushAnimBPOverride(int32 Priority, TSubclassOf<UAnimInstance> InAnimBPOverride);
    
    UFUNCTION(BlueprintCallable)
    void PostResIn();
    
    UFUNCTION(BlueprintCallable)
    void PopFootstepBankOverride(int32 Priority, UFortFootstepAudioBank* InFootstepBankOverride);
    
    UFUNCTION(BlueprintCallable)
    void PopAnimBPOverride(int32 Priority, TSubclassOf<UAnimInstance> InAnimBPOverride);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void PlayGroupEmote(const UFortMontageItemDefinitionBase* EmoteAsset);
    
    UFUNCTION(BlueprintCallable)
    void PerformSupplementalKillVolumeSweep();
    
    UFUNCTION(BlueprintCallable)
    void PassengerToPassengerAnimationStopped();
    
    UFUNCTION(BlueprintCallable)
    void PassengerToDriverAnimationStopped();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTetherStarted(APawn* LastTetherPawn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTetherEnded(APawn* LastTetherPawn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTetheredExitReleased();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTetheredExitPressed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartLongInteract(AActor* ReceivingActor, bool& Out_bConsumeEvent, bool& Out_bSkipSetInteractDuration, bool& Out_bSkipStartAnimation, EItemInteractionType& Out_ItemInteractionType);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSlidingStateChanged(bool bNewSlidingState);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_WaitingForEmoteInteraction();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_VehicleInputStateUnreliable();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_VehicleInputStateReliableForReplay();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_UpdateContextTracker();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_StoredControlRotation();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_StartedInteractSearch();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_ReplicatedSkyTube();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ReplicatedIsInVortex();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ReplicatedIsInSlipperyMovement();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ReplicatedInGliderRedeploy();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ReplicatedAnimMontage();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_RepAnimMontageStartSection();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PossessedProp();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ParachuteLockedOpen();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_NetMovementPrioritized(bool bOldNetMovementPrioritized);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_LockGroupEmoteLeaderRotation();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsTargeting();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsSlopeSliding();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsSkydivingFromBus();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsSkydiving(bool bPreviousState);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsParachuteOpen(bool bPreviousState);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsParachuteForcedOpen();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_IsInWaterVolume();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsInsideSafeZone();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsInAnyStorm();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_IsEmoteLeader();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_InVehicle();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_GroupEmoteLookTarget();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_GliderOverride();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_FootstepBankOverride();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_FacialTypeOverride();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_DBNOHoisterData(const FFortDBNOCarryHoisterData& PreviousDBNOHoisterData);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_DBNOHoistee();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CustomMeshHeightAdjustTarget();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_ControlledRCPawn();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_CharPartAnimMontageInfo();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_bHasStartedFloating();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_BaseCosmeticLoadout();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_AttachmentMesh();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_AppliedSwaps();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_AnimBPOverride();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_AccelerationZPack();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_AccelerationPack();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOpenParachute(bool& bConsumeEvent);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLockOnSearchCompleted(bool& bConsumeEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLocalItemInteractionComplete(AActor* ReceivingActor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLandscapeCheckFailedAndTeleported();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnExitedWaterVolume();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnExitedVehicle();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEnteredWaterVolume();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEnteredVehicle();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEndWaterSprintBoost();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEndParachuteMovement();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCharacterPartsReinitialized();
    
    UFUNCTION(BlueprintCallable)
    void OnCapsuleBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBeginWaterSprintBoost();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBeginParachuteMovement();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void NotifyTeammateSkydivedFromBus();
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastUpdateVehicleInputStateReliable(FFortAthenaVehicleInputStateReliable ReliableInput);
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastSetWeaponOverrideAnimSet(UFortWeaponAnimSet* WeaponOverrideAnimSet);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastClearWeaponOverrideAnimSet();
    
    UFUNCTION(BlueprintCallable)
    void MarkSafe(TSubclassOf<UGameplayEffect> GEtoApply);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ManualReviveFromDBNO(TSubclassOf<UGameplayEffect> ReviveGameplayEffectsOverride);
    
    UFUNCTION(BlueprintCallable)
    void LocalThrowCarriedPlayer();
    
    UFUNCTION(BlueprintCallable)
    bool LocalIsTryingToGetPickup();
    
private:
    UFUNCTION(BlueprintCallable, Exec)
    void ListCharacterParts(const FString& GenderAndOrPartString) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool IsZiplining() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWaterSprintBoosting() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUsingUmbrella() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUsingPersonalVehicle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTethered() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSprinting() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSkydivingFromLaunchPad() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSkydivingFromBus() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSkydiving() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPassivelySkydiving() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPassengerInVehicle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsParachuteOpen() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsParachuteLockedOpen() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsParachuteForcedOpen() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOperatingTurret() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNiagaraSimpleWaterSim() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNiagaraProceduralWaterSim() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsItemAndVariantSwapActiveById(const FGuid& SwapId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInVortex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInVehicle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInSlipperyMovement() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInSkyTube() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInInteractBlockingVehicle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInFrontEndHologram() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInFloatingMovement() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInCharacterCustomization() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    bool IsEmoteBlockedByMovement() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDrivingVehicle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDrivingInteractBlockingVehicle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCharacterCustomizationLoadingCompleted() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActivelyStrafingInAir() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActivelySkydivingUpInVortex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActivelySkydiving() const;
    
    UFUNCTION(BlueprintCallable)
    void InvokeWaterJumpSplash(const FVector& SplashPosition, float SplashScale);
    
    UFUNCTION(BlueprintCallable)
    void InvokeWaterHandSplashAttached(USceneComponent* AttachParent, FName AttachSocketName);
    
    UFUNCTION(BlueprintCallable)
    void InvokeWaterHandSplash(const FVector& SplashPosition);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasStartedFloating() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasRespawnedInAir() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasRecentlyExitedZiplineFromJumping() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasControlledRCPawn() const;
    
    UFUNCTION(BlueprintCallable)
    void HandleInStasis();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TScriptInterface<IFortVehicleInterface> GetVehicleUInterface() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    uint8 GetVehicleSeatIndex() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetVehicleOverrideExit();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetVehicleActor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFortAthenaVehicle* GetVehicle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FHitResult GetThrownItemTrajectoryHitResult() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APawn* GetTetherPawn() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFortPawnStasisMode GetStasisMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetStamina() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetSlopeSlidingNormal() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetSlopeSlidingAngles(float& LocalPitch, float& LocalRoll) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USkeletalMeshComponent* GetSkeletalMeshForPartType(EFortCustomPartType PartType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USkeletalMeshComponent* GetSkeletalMeshForCharmType(TEnumAsByte<EFortCustomCharmType::Type> CharmType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintPure)
    float GetSimulatedAttributeValue(const FGameplayAttribute& Attribute, const float DefaultValue) const;
    
    UFUNCTION(BlueprintCallable)
    FVector GetPreviousVelocity();
    
    UFUNCTION(BlueprintCallable)
    FVector GetPreviousPosition();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ABuildingGameplayActorPlayerPropAttachment* GetPossessedProp() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetPendingSkydiveLaunch() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPawnSignificance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPawnLOD() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumActiveBalloons() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxStamina() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetLastWaterSurfaceInfo(FVector& OutWaterSurfacePosition, FVector& OutWaterSurfaceNormal);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsSlopeSliding() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsHoldingObject() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetHomeActor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetGliderDisplayName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetGender(bool& IsMale, bool& IsFemale) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAnimMontage* GetFrontendAnimMontageIdleOverride() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetExtraLives() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFortPawnDisplayContext GetDisplayContext() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFortPlayerPawn* GetDBNOHoister() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFortPlayerPawn* GetDBNOHoistee() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFortSkyTube* GetCurrentSkyTube() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFortPlayerPawn* GetControllingPawn() const;
    
    UFUNCTION(BlueprintCallable)
    TSoftObjectPtr<UFXSystemAsset> GetContrailParticleSystemSoftRef();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UActorComponent*> GetComponentsByClassOnAllPartModifiers(TSubclassOf<UActorComponent> ComponentClass) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UActorComponent*> GetComponentsByClassForPartType(TSubclassOf<UActorComponent> ComponentClass, EFortCustomPartType PartType) const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetClientObservedStatValue(const FName StatName, int32 DefaultValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFortCustomGender GetCharacterGender() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFortPlayerCharm* GetCharacterCharmActorForCharmType(TEnumAsByte<EFortCustomCharmType::Type> CharmType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TEnumAsByte<EFortCustomBodyType::Type> GetCharacterBodyType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBaseAimPitchQuantized() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFXSystemComponent* GetActivePlayerWaterBoostComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFXSystemComponent* GetActivePlayerSwimmingComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFXSystemComponent* GetActivePlayerJumpSplashInWaterComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFXSystemComponent* GetActivePlayerInWaterComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFXSystemComponent* GetActivePlayerHandSplashInWaterComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTagContainer GatherMetaTags(const UAthenaCosmeticItemDefinition* CosmeticItem) const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void ForceOpenParachuteAndOverrideGlider(const UAthenaGliderItemDefinition* InGliderOverride, bool NewBResetGliderOverrideOnLanding, bool bForceIntoGliderRedeploy);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ForceDetachFromRemoteControlledPawn();
    
    UFUNCTION(BlueprintCallable)
    void ExitSkyTube(AFortSkyTube* SkyTube, bool& bIsLastTube);
    
    UFUNCTION(BlueprintCallable)
    void EnterSkyTube(AFortSkyTube* SkyTube, bool& bIsFirstTube);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void EndZiplining(bool bFromJump);
    
    UFUNCTION(BlueprintCallable)
    void EndSkydiving();
    
    UFUNCTION(BlueprintCallable)
    void EndHovering();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void EndGhostModeExit();
    
    UFUNCTION(BlueprintCallable)
    void EndFloating();
    
protected:
    UFUNCTION(BlueprintCallable)
    void EndedInteractSearch();
    
public:
    UFUNCTION(BlueprintCallable)
    void DriverToPassengerAnimationStopped();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DontHandsOnHips() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DontCrossArms() const;
    
    UFUNCTION(BlueprintCallable)
    void DisableFaceRotation(float DurationInSeconds, bool bSetStasis);
    
    UFUNCTION(BlueprintCallable)
    void DestroyBalloonRope();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugDestroyVehicle();
    
    UFUNCTION(BlueprintCallable)
    void ConstructItemSwapClonedFromLoadout(const FFortAthenaLoadout& Loadout, const UAthenaCosmeticItemDefinition* Item, FFortSwapItemAndVariantData& SwapData);
    
protected:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientUnequipCurrentWeaponById(FGuid WeaponItemGuid, bool bSetWeaponAttachment);
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientResetAbilitySystemComponent();
    
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void ClientNotifyAbilityFailed(const UGameplayAbility* FailedAbility, const FGameplayTagContainer& FailedReason);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientExecuteGameplayCueOnSpecificPlayer(const FGameplayTag GameplayCueTag);
    
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void ClientAcknowledgeVehicleInputState(float Timestamp);
    
    UFUNCTION(BlueprintCallable)
    void ClearWeaponOverrideAnimSet();
    
    UFUNCTION(BlueprintCallable)
    void ClearExistingCosmeticPetInstance();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanUseInventoryAsDriver() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanShootFromVehicle() const;
    
    UFUNCTION(BlueprintCallable)
    bool CanPredictJumpApex();
    
    UFUNCTION(BlueprintCallable)
    bool CanInterrogateFromDBNO(AController* EventInstigator);
    
    UFUNCTION(BlueprintCallable)
    void CancelJumpAbility();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void BroadcastSetWeaponOverrideAnimSet(UFortWeaponAnimSet* WeaponOverrideAnimSet);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void BroadcastClearWeaponOverrideAnimSet();
    
protected:
    UFUNCTION(BlueprintCallable)
    void BP_ForceOpenParachute();
    
    UFUNCTION(BlueprintCallable)
    void BP_ForceLockParachuteOpen(bool bLocked);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void BeginZiplining(const AFortAthenaZipline* Zipline, USceneComponent* SocketComponent);
    
    UFUNCTION(BlueprintCallable)
    void BeginSkydiving(bool bFromBus);
    
    UFUNCTION(BlueprintCallable)
    void BeginHovering();
    
    UFUNCTION(BlueprintCallable)
    void AttemptInstantInteractSearch();
    
    UFUNCTION(BlueprintCallable)
    void ApplyWrapToSaveTheWorldHoverboard();
    
    UFUNCTION(BlueprintCallable)
    void ApplyCosmeticLoadout();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AnimTrailsSetup(UParticleSystem* ParticleSystemReference, UNiagaraSystem* NiagaraSystemReference, FName FirstSocketName, FName SecondSocketName, float Width, UFXSystemComponent* OverrideParticleComp, FName OverideFirstSocketName, FName OverideSecondSocketName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AnimTrailsNotify(bool bActive);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AnimTrailsDisable();
    
protected:
    UFUNCTION(BlueprintCallable)
    void AITargetDied(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum);
    
public:
    UFUNCTION(BlueprintCallable)
    void AddIgnoredActor(AActor* InActorToIgnore, const float InIgnoreDuration);
    
    UFUNCTION(BlueprintCallable)
    void AddAttachment(USkeletalMesh* Attachment, TSubclassOf<UAnimInstance> InAnimBP);
    
protected:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void AddAbilityAITarget(AFortAIPawn* InTarget);
    
    
    // Fix for true pure virtual functions not being implemented
public:
    UFUNCTION()
    void OnCarriedObjectDetach(AActor* DetachedObject) override PURE_VIRTUAL(OnCarriedObjectDetach,);
    
    UFUNCTION()
    void OnCarriedObjectAttach(AActor* AttachedObject) override PURE_VIRTUAL(OnCarriedObjectAttach,);
    
    UFUNCTION()
    void GetCarriedObjectAttachmentInfo(FCarriedObjectAttachmentInfo& OutAttachInfo) const override PURE_VIRTUAL(GetCarriedObjectAttachmentInfo,);
    
    UFUNCTION()
    USceneComponent* GetAttachmentComponent(FName SocketName) const override PURE_VIRTUAL(GetAttachmentComponent, return NULL;);
    
    UFUNCTION()
    bool CanHoldObject(AActor* CarriableObject) const override PURE_VIRTUAL(CanHoldObject, return false;);
    
    UFUNCTION()
    bool ServerOnAttemptInteract(const FInteractionType& InteractType) override PURE_VIRTUAL(ServerOnAttemptInteract, return false;);
    
    UFUNCTION(BlueprintCallable)
    void PlayAnimationsMatchingQuery(const FGameplayTagQuery& TagQueryToMatch) override PURE_VIRTUAL(PlayAnimationsMatchingQuery,);
    
    UFUNCTION(BlueprintCallable)
    USkeletalMeshComponent* GetCustomizationRootSkeletalMeshComponent() const override PURE_VIRTUAL(GetCustomizationRootSkeletalMeshComponent, return NULL;);
    
};

