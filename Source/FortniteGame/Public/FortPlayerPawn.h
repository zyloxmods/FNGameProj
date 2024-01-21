#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Particles/ParticleSystem.h"
#include "Engine/CurveTable.h"
#include "Engine/EngineTypes.h"
#include "Components/TimelineComponent.h"
#include "AttributeSet.h"
#include "GameplayTagContainer.h"
#include "Styling/SlateBrush.h"
#include "CarriedObjectAttachmentInfo.h"
#include "CharacterPartChangedDelegate.h"
#include "CustomCharacterPartOwnerInterface.h"
#include "EColorSwatchType.h"
#include "EFortBuildingState.h"
#include "EFortCustomBodyType.h"
#include "EFortCustomGender.h"
#include "EFortCustomMovement.h"
#include "EFortCustomPartType.h"
#include "EFortPawnStasisMode.h"
#include "EItemInteractionStatus.h"
#include "EItemInteractionType.h"
#include "FortAthenaLoadout.h"
#include "FortAthenaVehicleInputStateReliable.h"
#include "FortAthenaVehicleInputStateUnreliable.h"
#include "FortCarriedObjectHolderInterface.h"
#include "FortCharacterPartsRepMontageInfo.h"
#include "FortClientObservedStatArray.h"
#include "FortInteractInterface.h"
#include "FortPawn.h"
#include "FortUICameraFrameTargetInterface.h"
#include "InteractionType.h"
#include "OnBallooningGravityCeilingChangedDelegate.h"
#include "OnBeginSkydivingEventDelegate.h"
#include "OnEndSkydivingEventDelegate.h"
#include "OnEndedInteractSearchDelegate.h"
#include "OnEnteredAircraftDelegate.h"
#include "OnFinishedCharacterCustomizationDelegate.h"
#include "OnPlayerPawnPosessionChangedDelegate.h"
#include "OnStartedInteractSearchDelegate.h"
#include "RepFortMeshAttachment.h"
#include "SlipperySlopeParams.h"
#include "Templates/SubclassOf.h"
#include "VehiclePawnState.h"
#include "VortexParams.h"
#include "ZiplinePawnState.h"
#include "Engine/SpringInterpolator.h"
#include "Particles/ParticleSystem.h"
#include "ZiplineStateChangedDelegate.h"
#include "FortPlayerPawn.generated.h"

class AActor;
class ABuildingGameplayActor;
class AController;
class ACustomCharacterPartModifier;
class AFortAIPawn;
class AFortAthenaVehicle;
class AFortAthenaZipline;
class AFortPickup;
class AFortPlayerParachute;
class AFortPlayerPet;
class AFortPlayerPetRepState;
class AFortRemoteControlledPawnAthena;
class AFortSkyTube;
class IFortArmoredInterface;
class UFortArmoredInterface;
class IFortVehicleInterface;
class UFortVehicleInterface;
class UAnimBlueprint;
class UAnimInstance;
class UAnimMontage;
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
class UFortAnimNotifyState_RootMotionInterrupt;
class UFortCustomizationAssetLoader;
class UFortFootstepAudioBank;
class UFortHero;
class UFortHeroType;
class UFortPawnScriptedBehavior;
class UFortVisibilityComponent;
class UFortWorldItemDefinition;
class UGameplayAbility;
class UGameplayEffect;
class UInputComponent;
class UMaterialInstanceDynamic;
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
class UFXSystemAsset;

UCLASS(Blueprintable, MinimalAPI, Config=Game)
class AFortPlayerPawn : public AFortPawn, public IFortCarriedObjectHolderInterface, public IFortInteractInterface, public ICustomCharacterPartOwnerInterface, public IFortUICameraFrameTargetInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsOutsideSafeZone, meta=(AllowPrivateAccess=true))
    uint8 bIsOutsideSafeZone: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 bIsNearSafeZoneEdge: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bPlayingSafeZoneEffects: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDoSafeZoneCleanup: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsSprintJump: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bPlayingPassengerToPassengerAnimation: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bPlayingDriverToPassengerAnimation: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bCameraLockedForVehicleSeatTransition: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_IsTargeting, meta=(AllowPrivateAccess=true))
    uint8 bIsTargeting: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bBalloonMovementActivated: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsScriptedBot: 1;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bBuildHotfix: 1;
    
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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    uint8 bInGliderRedeploy: 1;
    
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
    
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bCharacterPartsCastIndirectShadows: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EFortCustomGender CharacterGender;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EFortCustomBodyType CharacterBodyType;
    
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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_VehicleInputStateUnreliable, meta=(AllowPrivateAccess=true))
    FFortAthenaVehicleInputStateUnreliable VehicleInputStateUnreliable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OutsideSafeZoneBlendSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentOutsideSafeZonePPVBlend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetOutsideSafeZonePPVBlend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPostProcessComponent* OutsideSafeZonePPComponent;
    
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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UBuildingEditModeMetadata* LastBuildingMetadata;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float SprintCancelTime;
    
protected:
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
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FZiplineStateChanged ZiplineStateChanged;
    
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
    bool bPlayingPassengerToDriverAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float VehicleSpeedAtTimeOfJump;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_InVehicle, meta=(AllowPrivateAccess=true))
    FVehiclePawnState VehicleStateRep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVehiclePawnState VehicleStateLocal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVehiclePawnState VehicleStateLastTick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABuildingGameplayActor* BalloonRope;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int64 SlopeCameraOffsetFrameCounter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVectorRK4SpringInterpolator SlopeCameraOffsetInterpolator;
    
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
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UFortHero> Hero;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UFortHeroType> OvrHeroType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCustomPlayerComponent* HACK_CustomPRIComponent;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCustomCharacterPart* CharacterParts[6];
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCustomColorSwatch* CharacterColorSwatches[2];
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCustomColorSwatch* CharacterPartColorSwatches[6];
    
protected:
    UPROPERTY(EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponentBudgeted* CharacterPartSkeletalMeshComponents[6];
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int8 CharacterPartSMHiddenRefCount[6];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CosmeticLoadout, meta=(AllowPrivateAccess=true))
    FFortAthenaLoadout CosmeticLoadout;
    
private:
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
    UPROPERTY(EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint16 PackedReplicatedSlopeAngles;
    
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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NumSecondsOnGroundBeforeStoppingRagdoll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsLocalPlayer: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bDamagedEnemy: 1;
    
public:
    UPROPERTY(EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    uint32 PlayerStatus;
    
    UPROPERTY(EditAnywhere, Transient, ReplicatedUsing=OnRep_AccelerationPack, meta=(AllowPrivateAccess=true))
    uint16 AccelerationPack;
    
private:
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
    FOnBallooningGravityCeilingChanged OnBallooningGravityCeilingChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEnteredAircraft OnEnteredAircraft;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerPawnPosessionChanged OnPawnPossessed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerPawnPosessionChanged OnPawnUnpossessed;
    
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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlipperySlopeParams SlipperySlopeParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAthenaGliderItemDefinition* GliderClass;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AFortPlayerPetRepState* PetState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortPlayerPet* CosmeticPetInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ParachuteAttachment, meta=(AllowPrivateAccess=true))
    AFortPlayerParachute* ParachuteAttachment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ParachuteAttachSocket;
    
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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* ParachuteAudioLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ParachuteAndSkydiveAudioFadeInTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ParachuteAndSkydiveAudioFadeOutTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* SkydiveAudioLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* SkydivingLoop1P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* SkydivingLoop3P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* ParachuteOpenLoop1P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* ParachuteOpenLoop3P;
    
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
    
protected:
    UPROPERTY(EditAnywhere, Transient, ReplicatedUsing=OnRep_ControlledRCPawn, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AFortRemoteControlledPawnAthena> ControlledRCPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_StoredControlRotation, meta=(AllowPrivateAccess=true))
    FRotator StoredControlRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float GhostModeExitStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float GhostModeExitDuration;
    
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowClientsideBuildingToolEquipPrediction;
    
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
    void UnlockCameraAfterVehicleSeatTransition();
    
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
    void StopItemInteractionAbility(const EItemInteractionStatus ItemInteractionStatus);
    
    UFUNCTION(BlueprintCallable)
    void StopFacialFromSnippet();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void StartGhostModeExit(const float InGhostModeExitDuration);
    
protected:
    UFUNCTION(BlueprintCallable)
    void StartedInteractSearch();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldPlayDeathAnimation();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldDriverHaveReticle() const;
    
    UFUNCTION(BlueprintCallable)
    void SetVehicleOverrideExit(bool bIgnoreLaunch);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetStasisMode(EFortPawnStasisMode InStasisMode);
    
    UFUNCTION(BlueprintCallable)
    void SetPreviousVelocity(FVector OldVelocity);
    
    UFUNCTION(BlueprintCallable)
    void SetPreviousPosition(FVector OldPosition);
    
    UFUNCTION(BlueprintCallable)
    void SetPetType(const UAthenaPetItemDefinition* PetToCreate);
    
    UFUNCTION(BlueprintCallable)
    void SetPendingSkydiveLaunch(bool bPending);
    
    UFUNCTION(BlueprintCallable)
    void SetNumActiveBalloons(int32 NewBalloonCount);
    
    UFUNCTION(BlueprintCallable)
    void SetInVortex(bool bNewValue, float UpwardLaunchVelocity, float GravityFloorAltitude, float GravityFloorWidth, float GravityFloorGravityScalar, float GravityFloorTerminalVelocity);
    
    UFUNCTION(BlueprintCallable)
    void SetInSlipperyMovement(bool bIsSlippery);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetHomeActor(AActor* NewActor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetFirstPersonCamera(bool bNewUseFirstPersonCamera);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetEquippedArmoredInterface(TScriptInterface<IFortArmoredInterface> InInterface) const;
    
    UFUNCTION(BlueprintCallable)
    void SetBalloonRope(ABuildingGameplayActor* InBalloonRope);
    
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
    
    UFUNCTION(BlueprintCallable, Server, Unreliable, WithValidation)
    void ServerPlayUnableToPerformActionMontage();
    
    UFUNCTION(BlueprintCallable)
    AFortAthenaVehicle* ServerOnExitVehicle();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerHandlePickupWithSwap(AFortPickup* Pickup, FGuid Swap, float InFlyTime, const FVector InStartDirection, bool bPlayPickupSound);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerHandlePickupWithRequestedSwap(AFortPickup* Pickup, FGuid Swap, float InFlyTime, const FVector InStartDirection, bool bPlayPickupSound);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerHandlePickup(AFortPickup* Pickup, float InFlyTime, const FVector InStartDirection, bool bPlayPickupSound);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerEquipLastWeaponOrGadget(bool bForce);
    
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
    void ResetGameplayAttributes(const bool bIgnoreStatClamp);
    
    UFUNCTION(BlueprintCallable)
    void ResetClothAndDynamics();
    
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
    void PopFootstepBankOverride(int32 Priority, UFortFootstepAudioBank* InFootstepBankOverride);
    
    UFUNCTION(BlueprintCallable)
    void PopAnimBPOverride(int32 Priority, TSubclassOf<UAnimInstance> InAnimBPOverride);
    
    UFUNCTION(BlueprintCallable)
    void PerformSupplementalKillVolumeSweep();
    
    UFUNCTION(BlueprintCallable)
    void PassengerToPassengerAnimationStopped();
    
    UFUNCTION(BlueprintCallable)
    void PassengerToDriverAnimationStopped();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartLongInteract(AActor* ReceivingActor, bool& Out_bConsumeEvent, bool& Out_bSkipSetInteractDuration, bool& Out_bSkipStartAnimation, EItemInteractionType& Out_ItemInteractionType);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSlidingStateChanged(bool bNewSlidingState);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_VehicleInputStateUnreliable();
    
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
    void OnRep_ParachuteLockedOpen();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ParachuteAttachment();
    
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
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_IsOutsideSafeZone();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_InVehicle();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_FootstepBankOverride();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_CosmeticLoadout();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ControlledRCPawn();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_CharPartAnimMontageInfo();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_AttachmentMesh();
    
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
    void OnExitedVehicle();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEnteredVehicle();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCharacterPartsReinitialized();
    
    UFUNCTION(BlueprintCallable)
    void OnCapsuleBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void NotifyTeammateSkydivedFromBus();
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastUpdateVehicleInputStateReliable(FFortAthenaVehicleInputStateReliable ReliableInput);
    
public:
    UFUNCTION(BlueprintCallable)
    void MarkSafe(TSubclassOf<UGameplayEffect> GEtoApply);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ManualReviveFromDBNO();
    
    UFUNCTION(BlueprintCallable)
    bool LocalIsTryingToGetPickup();
    
private:
    UFUNCTION(BlueprintCallable, Exec)
    void ListCharacterParts(const FString& GenderAndOrPartString) const;
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsZiplining();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUsingUmbrella() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUsingPersonalVehicle() const;
    
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
    bool IsInCharacterCustomization() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDrivingVehicle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDrivingInteractBlockingVehicle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActivelyStrafingInAir() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActivelySkydivingUpInVortex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActivelySkydiving() const;
    
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
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
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
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintPure)
    float GetSimulatedAttributeValue(const FGameplayAttribute& Attribute, const float DefaultValue) const;
    
    UFUNCTION(BlueprintCallable)
    FVector GetPreviousVelocity();
    
    UFUNCTION(BlueprintCallable)
    FVector GetPreviousPosition();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetPendingSkydiveLaunch() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPawnRawBudgetValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPawnMovementLOD() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPawnLOD() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumActiveBalloons() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxStamina() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsSlopeSliding() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetHomeActor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetGender(bool& IsMale, bool& IsFemale) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAnimMontage* GetFrontendAnimMontageIdleOverride() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetExtraLives() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFortSkyTube* GetCurrentSkyTube() const;
    
    //UFUNCTION(BlueprintCallable)
   // TSoftObjectPtr<UFXSystemAsset> GetContrailParticleSystemSoftRef();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFortCustomGender GetCharacterGender() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFortCustomBodyType GetCharacterBodyType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBaseAimPitchQuantized() const;
    
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
    
protected:
    UFUNCTION(BlueprintCallable)
    void EndedInteractSearch();
    
public:
    UFUNCTION(BlueprintCallable)
    void DriverToPassengerAnimationStopped();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DontCrossArms() const;
    
    UFUNCTION(BlueprintCallable)
    void DisableFaceRotation(float DurationInSeconds, bool bSetStasis);
    
    UFUNCTION(BlueprintCallable)
    void DestroyBalloonRope();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugDestroyVehicle();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientResetAbilitySystemComponent();
    
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void ClientNotifyAbilityFailed(const UGameplayAbility* FailedAbility, const FGameplayTagContainer& FailedReason);
    
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void ClientAcknowledgeVehicleInputState(float Timestamp);
    
    UFUNCTION(BlueprintCallable)
    void ClearExistingCosmeticPetInstance();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanUseInventoryAsDriver() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanShootFromVehicle() const;
    
    UFUNCTION(BlueprintCallable)
    bool CanPredictJumpApex();
    
    UFUNCTION(BlueprintCallable)
    void CancelJumpAbility();
    
protected:
    UFUNCTION(BlueprintCallable)
    void BP_ForceOpenParachute();
    
    UFUNCTION(BlueprintCallable)
    void BP_ForceLockParachuteOpen(bool bLocked);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void BeginZiplining(const AFortAthenaZipline* Zipline, USceneComponent* SocketComponent, FName SocketName, FVector SocketOffset);
    
    UFUNCTION(BlueprintCallable)
    void BeginSkydiving(bool bFromBus);
    
    UFUNCTION(BlueprintCallable)
    void BeginHovering();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AnimTrailsSetup(UParticleSystem* ParticleSystemReference, FName FirstSocketName, FName SecondSocketName, float Width, UParticleSystemComponent* OverrideParticleComp, FName OverideFirstSocketName, FName OverideSecondSocketName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AnimTrailsNotify(bool bActive);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AnimTrailsDisable();
    
protected:
    UFUNCTION(BlueprintCallable)
    void AITargetDied(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum);
    
public:
    UFUNCTION(BlueprintCallable)
    void AddAttachment(USkeletalMesh* Attachment, UAnimBlueprint* InAnimBP);
    
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

