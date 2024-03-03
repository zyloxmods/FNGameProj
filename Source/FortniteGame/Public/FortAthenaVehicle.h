#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "GameplayEffectTypes.h"
#include "GameplayCueInterface.h"
#include "GameplayEffectTypes.h"
#include "GameplayEffectTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayTagAssetInterface.h"
#include "GameplayTagContainer.h"
#include "Chaos/ChaosEngineInterface.h"
#include "AthenaCarPlayerSlot.h"
#include "AthenaCarPlayerSlotUnreplicated.h"
#include "AthenaVehicleShootingCone.h"
#include "EFortBaseWeaponDamage.h"
#include "FortAbilitySystemInterface.h"
#include "FortAthenaVehicleInputState.h"
#include "FortAttributeInitializationKey.h"
#include "FortAutoFireTargetInterface.h"
#include "FortCurieInterface.h"
#include "FortDamageableActorInterface.h"
#include "FortInteractInterface.h"
#include "FortMarkableActorInterface.h"
#include "FortPhysicsPawn.h"
#include "FortRechargingActionTimer.h"
#include "FortVehicleInterface.h"
#include "IgnoredPawn.h"
#include "InteractionType.h"
#include "MarkedActorDisplayInfo.h"
#include "OnHandleOutOfHealthDelegate.h"
#include "OnMountedWeaponFiredDelegate.h"
#include "OnSleepStateChangedDelegate.h"
#include "OnSurfaceTypeVehicleIsOnChangedDelegate.h"
#include "OnVehicleSquadChangedDelegate.h"
#include "PredictedDestroyedBuilding.h"
#include "ReplicatedAthenaVehicleAttributes.h"
#include "SMVehicleGear.h"
#include "SeatTransitionMontage.h"
#include "SpringGroundTriangle.h"
#include "Templates/SubclassOf.h"
#include "VehicleCosmeticInfo.h"
#include "VehicleDamageablePart.h"
#include "VehicleDamageablePartHealthChangedDelegate.h"
#include "VehicleHealthChangedDelegate.h"
#include "VehicleReachedChargeThresholdDelegate.h"
#include "VehicleSeatEventDelegate.h"
#include "VehicleSpringInfo.h"
#include "VehicleTargetOrientation.h"
#include "FortAthenaVehicle.generated.h"

class AActor;
class ABuildingActor;
class AController;
class AFortPawn;
class AFortPlayerController;
class AFortPlayerControllerZone;
class AFortPlayerPawn;
class AFortPlayerStateZone;
class AFortWaterBodyActor;
class IVehicleSeatInputHookProvider;
class UVehicleSeatInputHookProvider;
class UAbilitySystemComponent;
class UAnimInstance;
class UAthenaItemWrapDefinition;
class UAudioComponent;
class UBuildingEditModeMetadata;
class UFortAbilitySet;
class UFortAbilitySystemComponent;
class UFortAthenaImpulseResponseSet;
class UFortCameraMode;
class UFortCameraMode_AthenaVehicle;
class UFortDamageSet;
class UFortHealthBarIndicator;
class UFortHealthSet;
class UFortSkyTubePhysicsComponent;
class UFortVehicleAnimSet;
class UFortVehicleImminentCollisionComponent;
class UFortVehicleMovementSet;
class UFortVehiclePontoonsComponent;
class UFortVehicleSeatComponent;
class UFortVehicleSeatWeaponComponent;
class UFortVehicleTrickSet;
class UGameplayEffect;
class UMaterialInstanceDynamic;
class UMaterialInterface;
class UNiagaraComponent;
class UNiagaraSystem;
class UObject;
class UPrimitiveComponent;
class USkeletalMeshComponent;
class USlateBrushAsset;
class USoundAttenuation;
class USoundBase;
class USoundEffectSourcePresetChain;
class USplineComponent;
class UTexture;
class UWeaponHitNotifyAudioBank;

UCLASS(Blueprintable, MinimalAPI)
class AFortAthenaVehicle : public AFortPhysicsPawn, public IFortInteractInterface, public IFortDamageableActorInterface/*, public IFortAbilitySystemInterface*/, public IGameplayCueInterface, public IGameplayTagAssetInterface, public IFortMarkableActorInterface, public IFortVehicleInterface, public IFortAutoFireTargetInterface, public IFortCurieInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_OverrideWrap, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAthenaItemWrapDefinition> SoftOverrideItemWrap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAthenaItemWrapDefinition* OverrideItemWrap;
    
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSleepStateChanged OnSleepStateChangedDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USplineComponent* BoundsXYSplineComponent;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 IndicatorEnabled: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bDestroyOnLastExit: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bShowDamageNumbers: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bShowDamageNumbersAtImpactLocation: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bPlayDamageAudio: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bShowVehicleHealthBarOnPlayerHUD: 1;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDestroyBuildingSMActorOnForceExit: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIgnoreAllFallingDamage: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIgnoreNextFallingDamage: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsBraking: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bPlayedDying: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_PendingDeath, meta=(AllowPrivateAccess=true))
    uint8 bPendingDeath: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    uint8 bHasDriver: 1;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAllowInteractBetweenFortVolumes: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCanPassengerPawnsTakeDamage: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_OnFire, meta=(AllowPrivateAccess=true))
    uint8 bOnFire: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_LeakingFuel, meta=(AllowPrivateAccess=true))
    uint8 bLeakingFuel: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bEnableCurieMaterial: 1;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVehicleSeatEvent OnPawnEnteredVehicleAtSeat;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVehicleSeatEvent OnPawnEnteredVehicleSeat;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVehicleSeatEvent OnPawnExitedVehicleSeat;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVehicleSeatEvent OnPawnExitedVehicleFromSeat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bWaitingForSleep: 1;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bAllowInteractBetweenFortVolumes_Runtime: 1;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bTricksEnabled: 1;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float FireDamageTickTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CurrentFOV;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer FireEnvDamageTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USlateBrushAsset* DriverReticleBrush;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float IndicatorAudibleDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture* IndicatorIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor IndicatorTint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WaterEffectsVehicleMaxSpeedKmh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* WaterEffectsAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* WaterEffectsComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer GameplayTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FIgnoredPawn> PawnsToIgnoreForDamge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AFortPawn*> PawnsToIgnoreForCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LastPropImpactImpulseTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPredictedDestroyedBuilding> PredictedDestroyedBuildings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UBuildingEditModeMetadata*> WallsVehicleCanDestroy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UBuildingEditModeMetadata*> WallsVehicleCannotDestroyWhenBoosting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<ABuildingActor>> BuildingPropClassesVehicleCanDestroy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<ABuildingActor>> BuildingPropClassesVehicleCannotDestroyWhenBoosting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TScriptInterface<IVehicleSeatInputHookProvider>> SeatInputProviders;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FFortAthenaVehicleInputState EmptyDriverInputState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EPhysicalSurface> PrimarySurfaceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EFortBaseWeaponDamage::Type> WeaponResponseType;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 VTDMode;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_SurfaceTypeVehicleOn, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EPhysicalSurface> SurfaceTypeVehicleOn;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 ForcedMaterialVariantIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortRechargingActionTimer FuelCharge;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVehicleReachedChargeThreshold OnFuelAboveThreshold;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVehicleReachedChargeThreshold OnFuelBelowThreshold;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVehicleReachedChargeThreshold OnOutOfFuel;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVehicleReachedChargeThreshold OnNotOutOfFuel;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMountedWeaponFired OnMountedWeaponFiredEvent;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SeatSwitchCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer VehicleTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVehicleSpringInfo> Springs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpringGroundTriangle GroundTriangle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSMVehicleGear> Gears;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSMVehicleGear> SprintGears;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSMVehicleGear> ReverseGears;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ForwardDrivingAntiGravityScaler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CameraSpaceForwardDistanceOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraAssistStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraAssistRampUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeToAutoCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraAssistBaseHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraAssistUpHillScaler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraAssistSteerScaler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraAssistForwardScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinSpeedForAutoCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AngleDegreesThresholdFromCurrentCameraToTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CameraFOVOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortCameraMode> TetheredCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> PlayerCollisionGameplayEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* OverlapComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* WaterOverlapComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VehicleMinHorSpeedToDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VehicleMaxHorSpeedToDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VehicleMinHorSpeedDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VehicleMaxHorSpeedDamage;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ImpulseResponseMultiplier;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ImpulseResponseZBias;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BrakeAboveTopSpeedDelta;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChangeDirBrakeDelta;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeToIdleBrake;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DragCoefficient;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxRearLateralFriction;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxFrontLateralFriction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PrimaryCameraPitchConstraint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PrimaryCameraYawConstraint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CachedSpeed;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MainBodyCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector TestInitialLinearVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector TestInitialAngularVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHitResult LookAheadHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortVehicleTrickSet* TrickSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PushForceSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FrontWheelsSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RearWheelSockets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* WaterBodyOverlapComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWeaponHitNotifyAudioBank* DefaultHitNotifyAudioBank;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHandleOutOfHealth OnHandleOutOfHealthDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVehicleHealthChanged OnHealthChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVehicleDamageablePartHealthChanged OnDamageablePartHealthChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BulletCollisionComponentTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> GEDamagePassengersOnDeath;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnVehicleSquadChanged OnVehicleSquadChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LifespanAfterDeath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LastDamagedTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSeatTransitionMontage> SeatTransitions;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ABuildingActor*> LocallyIgnoredBuildingActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector PreviousBuildingQueryPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundEffectSourcePresetChain* EmoteAudioSourcePresetChain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAttenuation* EmoteAudioAttenuation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMarkedActorDisplayInfo MarkerDisplay;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSurfaceTypeVehicleIsOnChanged OnSurfaceTypeVehicleIsOnChangedDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortAbilitySet* StartupAbilitySet;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortVehicleSeatComponent* VehicleSeatComponent;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortSkyTubePhysicsComponent* SkyTubePhysicsComponent;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortVehiclePontoonsComponent* PontoonsComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAthenaCarPlayerSlot> PlayerSlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAthenaCarPlayerSlot> PlayerSlotsBackup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FAthenaCarPlayerSlotUnreplicated> PlayerSlotsUnreplicated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortVehicleMovementSet* VehicleMovementSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_VehicleAttributes, meta=(AllowPrivateAccess=true))
    FReplicatedAthenaVehicleAttributes VehicleAttributes;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortVehicleImminentCollisionComponent* ImminentCollisionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_IgnoredBuildingActors, meta=(AllowPrivateAccess=true))
    TArray<ABuildingActor*> IgnoredBuildingActors;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_DamageableParts, meta=(AllowPrivateAccess=true))
    TArray<FVehicleDamageablePart> DamageableParts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_CorrectTargetOrientation, meta=(AllowPrivateAccess=true))
    FVehicleTargetOrientation CorrectTargetOrientation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortCameraMode_AthenaVehicle> CameraModeClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAnimInstance> DrivingAnimClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAnimInstance> DriverAnimLayerOverlayClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAnimInstance> PassengerAnimLayerOverlayClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortVehicleAnimSet* AnimSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortAttributeInitializationKey AttributeInitKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, ReplicatedUsing=OnRep_AbilitySystemComponent, meta=(AllowPrivateAccess=true))
    UFortAbilitySystemComponent* AbilitySystemComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, ReplicatedUsing=OnRep_HealthSet, meta=(AllowPrivateAccess=true))
    UFortHealthSet* HealthSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortAthenaImpulseResponseSet* ImpulseResponseSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortDamageSet* DamageSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortHealthBarIndicator* HealthBarIndicator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVehicleCosmeticInfo VehicleCosmeticInfo;
    
public:
    AFortAthenaVehicle();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool WheelsOnGround() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void WeaponFired(UFortVehicleSeatWeaponComponent* WeaponComponent, float Overheat);
    
    UFUNCTION(BlueprintCallable)
    void WakeUpOnGroundDied(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum);
    
    UFUNCTION(BlueprintCallable)
    void WakeUp();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool VehicleIsInSkyTube() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void UseOrExitReleasedFromSeat(const int32 FromSeatIndex);
    
    UFUNCTION(BlueprintCallable)
    void UseOrExitPressedFromSeat(const int32 FromSeatIndex);
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void UpdateClientWithVehicleTestInput(FVector LinearVelocity, FVector AngularVelocity);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShouldShowSoundIndicator() const;
    
    UFUNCTION(BlueprintCallable)
    void SetUnoccupiedAutoDestroy(float UnoccupiedTime);
    
    UFUNCTION(BlueprintCallable)
    void SetSpringEnabled(const int32 SpringIndex, const bool bEnabled);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetShootingCone(const int32 SeatIdx, FAthenaVehicleShootingCone InCone);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetPropDestructionParams(TArray<TSubclassOf<ABuildingActor>> InBuildingPropClassesVehicleCanDestroy, TArray<TSubclassOf<ABuildingActor>> InBuildingPropClassesVehicleCannotDestroyWhenBoosting, TArray<UBuildingEditModeMetadata*> InWallsVehicleCanDestroy, TArray<UBuildingEditModeMetadata*> InWallsVehicleCannotDestroyWhenBoosting);
    
    UFUNCTION(BlueprintCallable)
    void SetImpulseResponseZBias(const float ZBias);
    
    UFUNCTION(BlueprintCallable)
    void SetImpulseResponseMultiplier(const float Multiplier);
    
    UFUNCTION(BlueprintCallable)
    void SetIgnoreNextFallingDamage(bool bInIgnoreNextFallingDamage);
    
    UFUNCTION(BlueprintCallable)
    void SetIgnoreAllFallingDamage(bool InIgnoreAllFallingDamage);
    
    UFUNCTION(BlueprintCallable)
    void SetHealthPercent(float Percent);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetDyingPhysics();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetCurrentFocusedSocketLocation(const int32 SeatIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetAllowInteractionBetweenFortVolumes(bool bInteractBetweenVolumes);
    
    UFUNCTION(BlueprintCallable)
    void SetActorBase(AActor* InActorBase, const int32 SeatIndex);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerUsingRiftPortal(AActor* RiftPortal);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerStartFire(uint8 FireModeNum);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerSetIgnoreNextFallingDamage(bool InIgnoreNextFallingDamage);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerSetIgnoreAllFallingDamage(bool InIgnoreAllFallingDamage);
    
    UFUNCTION(BlueprintCallable)
    bool ServerOnAttemptInteract(const FInteractionType& InteractType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool SeatIsTurret(const int32 SeatIndex) const;
    
    UFUNCTION(BlueprintCallable)
    void ResetTrick();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool RearLateralFrictionHasReachedMax() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool PlayerIsTryingToReverse() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool PlayerIsTryingToMoveForward() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PawnHitByVehicle(AFortPawn* Pawn, const FVector& ImpactPoint, const FVector& ImpactNormal, const FVector LaunchVector);
    
    UFUNCTION(BlueprintCallable)
    void OverridePontoonRadiusOnServer(int32 PontoonIndex, float NewRadius);
    
    UFUNCTION(BlueprintCallable)
    void OverrideCurrentWrap(const UAthenaItemWrapDefinition* LoadedWrap);
    
protected:
    //UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
   // void OnSurfaceTypeVehicleIsOnChanged(TEnumAsByte<EPhysicalSurface> SurfaceTypeVehicleIsOn);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStopTick();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartTick();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartFire(uint8 FireModeNum);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSleepStateChanged(const bool bAwake);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_VehicleAttributes();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SurfaceTypeVehicleOn(TEnumAsByte<EPhysicalSurface> PreviousSurfaceOn);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_PendingDeath();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_OverrideWrap();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_OnFire();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_LeakingFuel();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IgnoredBuildingActors();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_HealthSet();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_DamageableParts(const TArray<FVehicleDamageablePart>& PrevDamageableParts);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CorrectTargetOrientation();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_AbilitySystemComponent();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnPxComponentWake(UPrimitiveComponent* WakingComponent, FName BoneName);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPawnExitVehicle(AFortPlayerPawn* PlayerPawn, FName ExitSocketName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPawnEnterVehicle(AFortPlayerPawn* PlayerPawn, const int32 SeatIdx);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnIsSprintingChanged();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnImpactDamageApplied(const float Damage, const FVector ImpactNormal);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHonk();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHoldExitStopped(AFortPawn* ExitingPawn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHoldExitStarted(AFortPawn* ExitingPawn, const float ExitDuration);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHitBuildingActor(const FHitResult& HitResult, const float ModifiedDamageToApply);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHealed(float Heal, const FGameplayTagContainer& HealTags, const FGameplayEffectContextHandle& EffectContext, AController* EventInstigator, AActor* HealCauser);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFuelTouchedFire(AActor* SourceActor);
    
    UFUNCTION(BlueprintCallable)
    void OnExitOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnExitedWaterVolume(const FVector& WaterSurfacePoint);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnExitedWaterBody(AFortWaterBodyActor* WaterBody);
    
    UFUNCTION(BlueprintCallable)
    void OnEnterOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEnteredWaterVolume(const FVector& WaterSurfacePoint);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEnteredWaterBody(AFortWaterBodyActor* WaterBody);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void OnDeathPlayEffects(float Damage, const FGameplayTagContainer& DamageTags, FVector Momentum, const FHitResult& HitInfo, AFortPawn* InstigatedBy, AActor* DamageCauser, FGameplayEffectContextHandle EffectContext);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void OnDamagePlayEffects(float Damage, const FGameplayTagContainer& DamageTags, FVector Momentum, const FHitResult& HitInfo, AFortPawn* InstigatedBy, AActor* DamageCauser, FGameplayEffectContextHandle EffectContext);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDamaged(float Damage, const FGameplayTagContainer& DamageTags, const FGameplayEffectContextHandle& EffectContext, AController* EventInstigator, AActor* DamageCauser);
    
  //  UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
//    void OnCollisionHitEffects(const FVector HitLocation, const FVector HitNormalImpulse, const FVector HitFrictionImpulse, const FVector HitNormal, AActor* HitActor, TEnumAsByte<EPhysicalSurface> HitSurfaceType);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void OnCollisionHitDamageEffects(float DamageTaken);
    
    UFUNCTION(BlueprintCallable)
    float ModifyIncomingDamage(float Damage, const FGameplayTagContainer& InTags, const FGameplayEffectContextHandle& EffectContext, AController* EventInstigator, AActor* DamageCauser);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_ApplyCosmeticWrap(const UAthenaItemWrapDefinition* LoadedWrap);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSprinting() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSlowEnoughToInteract() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsScrapingSidesOrTop() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOverlappingWaterBody() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOutOfFuel() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMagnetizedForSkyTubes() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsJumping() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInWaterBody() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInWater() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInSkyTube() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInReverseGear() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInAir() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHonking() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFuelBelowThreshold() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCorrectingOrientation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCameraControlledRotation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBraking() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAsleep() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAirControlling() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasEverContainedPlayers() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasDriver() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasConstraints() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GunOverheat(UFortVehicleSeatWeaponComponent* WeaponComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetVehicleVelocity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTotalSpeedKmh() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSteeringAngle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetStandingFiringOffsetForSeat(const int32 SeatIdx) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSpringLengthRatio(int32 SpringIdx) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetShootingCone(const int32 SeatIdx, FTransform& OutConeTM, FAthenaVehicleShootingCone& OutCone) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortVehicleSeatWeaponComponent* GetSeatWeaponComponent(const int32 SeatIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSeatSwitchCooldown(const int32 SeatIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetPreviousLinearVelocity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetPreviousLinearAcceleration() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPreviousForwardSpeedKmh() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFortPlayerPawn* GetPawnAtSeat(const int32 SeatIdx) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxHealth() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetIndicatorRelativeOffset() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHealth() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetForwardSpeedKmh() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFortPlayerPawn* GetDriver() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetDisplayName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDesiredForwardVelocityDelta() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDesiredForwardVelocity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDesiredForwardSpeedKmh() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentSignificance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentGear() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentFOV() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentForwardVelocity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentBudget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentBrakeForce(float ForwardSpeedKmH) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetCrouchingFiringOffsetForSeat(const int32 SeatIdx) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBrakingDelta() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AFortPlayerPawn*> GetAllPassengers() const;
    
    UFUNCTION(BlueprintCallable)
    void GameplayCue_Damage(TEnumAsByte<EGameplayCueEvent::Type> EventType, FGameplayCueParameters Parameters);
    
protected:
    UFUNCTION(BlueprintCallable)
    void GamepadUseOrExitReleasedFromSeat(const int32 FromSeatIndex);
    
    UFUNCTION(BlueprintCallable)
    void GamepadUseOrExitPressedFromSeat(const int32 FromSeatIndex);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 FindSeatIndex(const AFortPlayerPawn* PlayerPawn) const;
    
protected:
    UFUNCTION(BlueprintCallable)
    bool EjectSeat(const int32 SeatIndex);
    
public:
    UFUNCTION(BlueprintCallable)
    bool EjectPlayerPawn(const AFortPlayerPawn* InPlayerPawn);
    
    UFUNCTION(BlueprintCallable)
    void EjectAllPlayers();
    
    UFUNCTION(BlueprintCallable)
    void DisableTrickCredit(float Duration);
    
    UFUNCTION(BlueprintCallable)
    void DestroyVehicle();
    
protected:
    UFUNCTION(BlueprintCallable)
    void DestroyAllDamageableParts();
    
public:
    UFUNCTION(BlueprintCallable)
    void DemagnetizeFromSkyTube();
    
protected:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void DebugDrawImpactBucket(FVector Location, FVector ImpactVector, FColor Color);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ContainsPlayers() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ClientIsDriver() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanTeleport() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanShootFromSeat(const int32 SeatIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanDriveOnIncline() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanCorrectOrientation(AFortPawn* FP) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanContainPlayers() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanAntigravityOnIncline() const;
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void BroadcastResetWaterIdleTimeEmpty();
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable, meta=(WorldContext="WorldContextObject"))
    void BroadcastAbilityImpactAtLocation(UObject* WorldContextObject, USoundBase* InSound, UObject* InInstigator, const FVector& position, float Radius, FName Tag, const bool bSubtractLocalNoise);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool BP_CanInteract(AFortPlayerController* FortPC);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BlocksBuilding() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    UMaterialInstanceDynamic* ApplyMaterialAndUseWrapIfPossible(UMaterialInterface* MaterialToUse, int32 SlotIndex, bool bAlwaysCreateMID);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AnyWheelsOnGround() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AllowInteractionBetweenFortVolume() const;
    
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void ForwardGameplayCueToParent() override PURE_VIRTUAL(ForwardGameplayCueToParent,);
    
    UFUNCTION(BlueprintCallable)
    bool HasMatchingGameplayTag(FGameplayTag TagToCheck) const override PURE_VIRTUAL(HasMatchingGameplayTag, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool HasAnyMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(HasAnyMatchingGameplayTags, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool HasAllMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(HasAllMatchingGameplayTags, return false;);
    
    UFUNCTION(BlueprintCallable)
    void GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(GetOwnedGameplayTags,);
    
    UFUNCTION(BlueprintCallable)
    bool VehicleIsInAir() const override PURE_VIRTUAL(VehicleIsInAir, return false;);
    
    UFUNCTION(BlueprintCallable)
    void VehicleGameplayCue_Damage(TEnumAsByte<EGameplayCueEvent::Type> EventType, FGameplayCueParameters Parameters) override PURE_VIRTUAL(VehicleGameplayCue_Damage,);
    
    UFUNCTION(BlueprintCallable)
    bool ShowVehicleHealthBarOnPlayerHUD() const override PURE_VIRTUAL(ShowVehicleHealthBarOnPlayerHUD, return false;);
    
    UFUNCTION(BlueprintCallable)
    void SetForcedToAlwaysSpawn(const bool bSetTo) override PURE_VIRTUAL(SetForcedToAlwaysSpawn,);
    
    UFUNCTION(BlueprintCallable)
    void SetDestroyOnLastExit(bool bSetTo) override PURE_VIRTUAL(SetDestroyOnLastExit,);
    
protected:
    UFUNCTION(BlueprintCallable)
    void NotifyAudioComponentVehicleTriggered(UAudioComponent* AudioComponent, int32 Priority) override PURE_VIRTUAL(NotifyAudioComponentVehicleTriggered,);
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsTouchingGround() const override PURE_VIRTUAL(IsTouchingGround, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool IsIdling() const override PURE_VIRTUAL(IsIdling, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool IsDestructible() const override PURE_VIRTUAL(IsDestructible, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool IsBoosting() const override PURE_VIRTUAL(IsBoosting, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool HasSeatCollision(const int32 SeatIndex) override PURE_VIRTUAL(HasSeatCollision, return false;);
    
    UFUNCTION(BlueprintCallable)
    float GetWaterDepth() const override PURE_VIRTUAL(GetWaterDepth, return 0.0f;);
    
    UFUNCTION(BlueprintCallable)
    FGameplayTagContainer GetVehicleTags() const override PURE_VIRTUAL(GetVehicleTags, return FGameplayTagContainer{};);
    
    UFUNCTION(BlueprintCallable)
    UFortVehicleSeatComponent* GetVehicleSeatComponentPtr() override PURE_VIRTUAL(GetVehicleSeatComponentPtr, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    FText GetVehicleSeatChoiceDisplayText(const int32 SeatIndex) const override PURE_VIRTUAL(GetVehicleSeatChoiceDisplayText, return FText::GetEmpty(););
    
    UFUNCTION(BlueprintCallable)
    FRotator GetVehicleRotation() const override PURE_VIRTUAL(GetVehicleRotation, return FRotator{};);
    
    UFUNCTION(BlueprintCallable)
    FVector GetVehicleRightVector() const override PURE_VIRTUAL(GetVehicleRightVector, return FVector{};);
    
    UFUNCTION(BlueprintCallable)
    AFortPlayerStateZone* GetVehiclePlayerState(const AFortPlayerPawn* PlayerPawn) const override PURE_VIRTUAL(GetVehiclePlayerState, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    FVector GetVehicleForwardVector() const override PURE_VIRTUAL(GetVehicleForwardVector, return FVector{};);
    
    UFUNCTION(BlueprintCallable)
    FName GetVehicleExitActionName(AFortPlayerPawn* FortPlayerPawn) const override PURE_VIRTUAL(GetVehicleExitActionName, return NAME_None;);
    
    UFUNCTION(BlueprintCallable)
    AFortPlayerControllerZone* GetVehicleController(AFortPlayerPawn* PlayerPawn) const override PURE_VIRTUAL(GetVehicleController, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    FName GetVehicleChangeSeatActionName(AFortPlayerPawn* FortPlayerPawn) const override PURE_VIRTUAL(GetVehicleChangeSeatActionName, return NAME_None;);
    
    UFUNCTION(BlueprintCallable)
    AActor* GetVehicleActorPtrConst() const override PURE_VIRTUAL(GetVehicleActorPtrConst, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    AActor* GetVehicleActorPtr() override PURE_VIRTUAL(GetVehicleActorPtr, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    UAbilitySystemComponent* GetVehicleAbilitySystemComponent() const override PURE_VIRTUAL(GetVehicleAbilitySystemComponent, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    USkeletalMeshComponent* GetSkeletalMeshComponent() const override PURE_VIRTUAL(GetSkeletalMeshComponent, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    FVector GetOwnerLocation() const override PURE_VIRTUAL(GetOwnerLocation, return FVector{};);
    
    UFUNCTION(BlueprintCallable)
    FGameplayTagContainer GetGameplayTags() const override PURE_VIRTUAL(GetGameplayTags, return FGameplayTagContainer{};);
    
    UFUNCTION(BlueprintCallable)
    bool GetForcedToAlwaysSpawn() const override PURE_VIRTUAL(GetForcedToAlwaysSpawn, return false;);
    
    UFUNCTION(BlueprintCallable)
    FTransform GetExitSocketTransform(const int32 SeatIndex, const int32 SocketIndex) const override PURE_VIRTUAL(GetExitSocketTransform, return FTransform{};);
    
    UFUNCTION()
    void ExitReleasedFromSeat(const int32 FromSeatIndex) override PURE_VIRTUAL(ExitReleasedFromSeat,);
    
    UFUNCTION()
    void ExitPressedFromSeat(const int32 FromSeatIndex) override PURE_VIRTUAL(ExitPressedFromSeat,);
    
    UFUNCTION()
    void ExitActivatedFromSeat(const int32 FromSeatIndex) override PURE_VIRTUAL(ExitActivatedFromSeat,);
    
    UFUNCTION()
    void ChangeSeatFromIndex(const int32 FromSeatIndex) override PURE_VIRTUAL(ChangeSeatFromIndex,);
    
    UFUNCTION()
    void ChangeSeat() override PURE_VIRTUAL(ChangeSeat,);
    
    UFUNCTION(BlueprintCallable)
    void CallWeaponFired(UFortVehicleSeatWeaponComponent* WeaponComponent, float Overheat) override PURE_VIRTUAL(CallWeaponFired,);
    
    UFUNCTION(BlueprintCallable)
    void CallGunOverheat(UFortVehicleSeatWeaponComponent* WeaponComponent) override PURE_VIRTUAL(CallGunOverheat,);
    
    UFUNCTION(BlueprintCallable)
    void AddVehicleActionNamesAndLabels(AFortPlayerPawn* FortPlayerPawn, UPARAM(Ref) TArray<FName>& SeatActionNames, UPARAM(Ref) TArray<FText>& SeatActionLabels) override PURE_VIRTUAL(AddVehicleActionNamesAndLabels,);
    
};

