#pragma once
#include "CoreMinimal.h"
#include "ECommonInputType.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "AbilitySystemInterface.h"
#include "GameplayEffectTypes.h"
#include "GameplayCueInterface.h"
#include "GameplayEffectTypes.h"
#include "GameplayEffectTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayTagAssetInterface.h"
#include "GameplayTagContainer.h"
#include "AthenaCarPlayerSlot.h"
#include "AthenaCarPlayerSlotUnreplicated.h"
#include "AthenaVehicleShootingCone.h"
#include "EFortBaseWeaponDamage.h"
#include "FortAthenaVehicleInputState.h"
#include "FortAttributeInitializationKey.h"
#include "FortAutoFireTargetInterface.h"
#include "FortDamageableActorInterface.h"
#include "FortInteractInterface.h"
#include "FortMarkableActorInterface.h"
#include "FortPhysicsPawn.h"
#include "FortRechargingActionTimer.h"
#include "FortVehicleInterface.h"
#include "IgnoredPawn.h"
#include "InteractionType.h"
#include "LevelSaveSpawnable.h"
#include "MarkedActorDisplayInfo.h"
#include "OnHandleOutOfHealthDelegate.h"
#include "OnMountedWeaponFiredDelegate.h"
//#include "OnSurfaceTypeVehicleIsOnChangedDelegate.h"
#include "OnVehicleSquadChangedDelegate.h"
#include "ReplicatedAthenaVehicleAttributes.h"
#include "SMVehicleGear.h"
#include "SeatTransitionMontage.h"
#include "SpringGroundTriangle.h"
#include "Templates/SubclassOf.h"
#include "VehicleHealthChangedDelegate.h"
#include "VehicleReachedChargeThresholdDelegate.h"
#include "VehicleSpringInfo.h"
#include "VehicleTargetOrientation.h"
#include "FortAthenaVehicle.generated.h"

class AActor;
class ABuildingActor;
class ABuildingGameplayActor;
class AController;
class ACustomItemWrapModifier;
class AFortPawn;
class AFortPlayerController;
class AFortPlayerPawn;
class UAnimInstance;
class UAthenaItemWrapDefinition;
class UAthenaVehicleCosmeticItemDefinition;
class UBuildingEditModeMetadata;
class UFortAbilitySet;
class UFortAbilitySystemComponent;
class UFortAthenaImpulseResponseSet;
class UFortCameraMode_AthenaVehicle;
class UFortDamageSet;
class UFortHealthBarIndicator;
class UFortHealthSet;
class UFortSkyTubePhysicsComponent;
class UFortVehicleMovementSet;
class UFortVehicleSeatComponent;
class UFortVehicleSeatWeaponComponent;
class UFortVehicleTrickSet;
class UGameplayEffect;
class UMaterialInstanceDynamic;
class UMaterialInterface;
class UPrimitiveComponent;
class USceneComponent;
class UShapeComponent;
class UTexture;
class UWeaponHitNotifyAudioBank;

UCLASS(Blueprintable, MinimalAPI, Config=Game)
class AFortAthenaVehicle : public AFortPhysicsPawn, public IFortInteractInterface, public IFortDamageableActorInterface/*, public IAbilitySystemInterface*/, public IGameplayCueInterface, public ILevelSaveSpawnable, public IGameplayTagAssetInterface, public IFortMarkableActorInterface, public IFortVehicleInterface, public IFortAutoFireTargetInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EPhysicalSurface> PrimarySurfaceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EFortBaseWeaponDamage::Type> WeaponResponseType;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SeatSwitchCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowDamageNumbers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayDamageAudio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowVehicleHealthBarOnPlayerHUD;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDestroyBuildingSMActorOnForceExit;
    
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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CameraFOVOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIgnoreAllFallingDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIgnoreNextFallingDamage;
    
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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsBraking;
    
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
    float CameraPitchConstraint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraYawConstraint;
    
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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CachedSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PushForceSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FrontWheelsSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RearWheelSockets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWeaponHitNotifyAudioBank* DefaultHitNotifyAudioBank;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHandleOutOfHealth OnHandleOutOfHealthDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVehicleHealthChanged OnHealthChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> GEDamagePassengersOnDeath;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnVehicleSquadChanged OnVehicleSquadChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LifespanAfterDeath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bPlayedDying;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LastDamagedTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSeatTransitionMontage> SeatTransitions;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> PlayerCollisionGameplayEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* OverlapComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UShapeComponent* AimAssistShapeComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool bHasDriver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FFortAthenaVehicleInputState EmptyDriverInputState;
    
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
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMountedWeaponFired OnMountedWeaponFiredEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortVehicleMovementSet* VehicleMovementSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_VehicleAttributes, meta=(AllowPrivateAccess=true))
    FReplicatedAthenaVehicleAttributes VehicleAttributes;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_IgnoredBuildingActors, meta=(AllowPrivateAccess=true))
    TArray<ABuildingActor*> IgnoredBuildingActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_CorrectTargetOrientation, meta=(AllowPrivateAccess=true))
    FVehicleTargetOrientation CorrectTargetOrientation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bHasAnyMountedWeaponSeats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortCameraMode_AthenaVehicle> CameraModeClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAnimInstance> DrivingAnimClass;
    
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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortPlayerPawn* MostRecentCosmeticSourcePawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAthenaVehicleCosmeticItemDefinition* ActiveCosmeticItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortPlayerPawn* PawnAssociatedWithWrap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAthenaItemWrapDefinition* ActiveCosmeticWrap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<USceneComponent*> SpawnedCosmeticComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_PendingDeath, meta=(AllowPrivateAccess=true))
    bool bPendingDeath;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanPassengerPawnsTakeDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer GameplayTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FIgnoredPawn> PawnsToIgnoreForDamge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UBuildingEditModeMetadata*> WallsVehicleCanDestroy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UBuildingEditModeMetadata*> WallsVehicleCannotDestroyWhenBoosting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<ABuildingActor>> BuildingPropClassesVehicleCanDestroy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<ABuildingActor>> BuildingPropClassesVehicleCannotDestroyWhenBoosting;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ACustomItemWrapModifier* ItemWrapModifier;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_SurfaceTypeVehicleOn, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EPhysicalSurface> SurfaceTypeVehicleOn;
    
    //UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    //FOnSurfaceTypeVehicleIsOnChanged OnSurfaceTypeVehicleIsOnChangedDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortAbilitySet* StartupAbilitySet;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bDestroyOnLastExit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IndicatorEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float IndicatorAudibleDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture* IndicatorIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor IndicatorTint;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMarkedActorDisplayInfo MarkerDisplay;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortVehicleSeatComponent* VehicleSeatComponent;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortSkyTubePhysicsComponent* SkyTubePhysicsComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAthenaCarPlayerSlot> PlayerSlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAthenaCarPlayerSlot> PlayerSlotsBackup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FAthenaCarPlayerSlotUnreplicated> PlayerSlotsUnreplicated;
    
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
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void UpdateClientWithVehicleTestInput(FVector LinearVelocity, FVector AngularVelocity);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShouldShowSoundIndicator() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetShootingCone(int32 SeatIdx, FAthenaVehicleShootingCone InCone);
    
    UFUNCTION(BlueprintCallable)
    void SetPropDestructionParams(TArray<TSubclassOf<ABuildingActor>> InBuildingPropClassesVehicleCanDestroy, TArray<TSubclassOf<ABuildingActor>> InBuildingPropClassesVehicleCannotDestroyWhenBoosting, TArray<UBuildingEditModeMetadata*> InWallsVehicleCanDestroy, TArray<UBuildingEditModeMetadata*> InWallsVehicleCannotDestroyWhenBoosting);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetImpulseResponseZBias(const float ZBias);
    
    UFUNCTION(BlueprintCallable)
    void SetImpulseResponseMultiplier(const float Multiplier);
    
    UFUNCTION(BlueprintCallable)
    void SetIgnoreNextFallingDamage(bool InIgnoreNextFallingDamage);
    
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
    void SetActorBase(AActor* InActorBase, const int32 SeatIndex);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerUsingRiftPortal(ABuildingGameplayActor* RiftPortal);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerStartFire(uint8 FireModeNum);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetIgnoreNextFallingDamage(bool InIgnoreNextFallingDamage);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetIgnoreAllFallingDamage(bool InIgnoreAllFallingDamage);
    
    UFUNCTION(BlueprintCallable)
    bool ServerOnAttemptInteract(const FInteractionType& InteractType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool SeatIsTurret(int32 SeatIndex) const;
    
    UFUNCTION(BlueprintCallable)
    void ResetTrick();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool RearLateralFrictionHasReachedMax() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PawnHitByVehicle(AFortPawn* Pawn, const FVector& ImpactPoint, const FVector& ImpactNormal, const FVector LaunchVector);
    
    UFUNCTION(BlueprintCallable)
    void OverrideCurrentWrap(const UAthenaItemWrapDefinition* LoadedWrap);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSurfaceTypeVehicleIsOnChanged(EPhysicalSurface SurfaceTypeVehicleIsOn);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStopTick();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartTick();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartFire(uint8 FireModeNum);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_VehicleAttributes();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SurfaceTypeVehicleOn(TEnumAsByte<EPhysicalSurface> PreviousSurfaceOn);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_PendingDeath();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IgnoredBuildingActors();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_HealthSet();
    
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
    void OnPawnEnterVehicle(AFortPlayerPawn* PlayerPawn, int32 SeatIdx);
    
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
    void OnExitedWaterVolume(const FVector& WaterSurfacePoint);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEnteredWaterVolume(const FVector& WaterSurfacePoint);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void OnDeathPlayEffects(float Damage, const FGameplayTagContainer& DamageTags, FVector Momentum, const FHitResult& HitInfo, AFortPawn* InstigatedBy, AActor* DamageCauser, FGameplayEffectContextHandle EffectContext);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void OnDamagePlayEffects(float Damage, const FGameplayTagContainer& DamageTags, FVector Momentum, const FHitResult& HitInfo, AFortPawn* InstigatedBy, AActor* DamageCauser, FGameplayEffectContextHandle EffectContext);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDamaged(float Damage, const FGameplayTagContainer& DamageTags, const FGameplayEffectContextHandle& EffectContext, AController* EventInstigator, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void OnCollisionHitEffects(const FVector& HitLocation, const FVector& HitNormalImpulse, const FVector& HitFrictionImpulse, const FVector& HitNormal, AActor* HitActor, EPhysicalSurface HitSurfaceType);
    
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
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOutOfFuel() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMagnetizedForSkyTubes() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsJumping() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInWater() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInSkyTube() const;
    
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
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    FName GetVehicleSeatPrimaryAction(AFortPlayerPawn* FortPlayerPawn) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    TArray<FText> GetVehicleSeatLabels(AFortPlayerPawn* PlayerPawn, const ECommonInputType OverrideInputType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    TArray<FName> GetVehicleSeatActionNames(AFortPlayerPawn* PlayerPawn, const ECommonInputType OverrideInputType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    TArray<FText> GetVehicleSeatActionLabels(AFortPlayerPawn* PlayerPawn, const ECommonInputType OverrideInputType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetVehicleExitActionName(AFortPlayerPawn* FortPlayerPawn) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetVehicleChangeSeatActionName(AFortPlayerPawn* FortPlayerPawn) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSteeringAngle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetStandingFiringOffsetForSeat(int32 SeatIdx) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSpringLengthRatio(int32 SpringIdx) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetShootingCone(int32 SeatIdx, FTransform& OutConeTM, FAthenaVehicleShootingCone& OutCone) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortVehicleSeatWeaponComponent* GetSeatWeaponComponent(int32 SeatIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetPreviousLinearVelocity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetPreviousLinearAcceleration() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPreviousForwardSpeedKmh() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFortPlayerPawn* GetPawnAtSeat(int32 SeatIdx) const;
    
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
    FVector GetCrouchingFiringOffsetForSeat(int32 SeatIdx) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBrakingDelta() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AFortPlayerPawn*> GetAllPassengers() const;
    
    UFUNCTION(BlueprintCallable)
    void GameplayCue_Damage(TEnumAsByte<EGameplayCueEvent::Type> EventType, FGameplayCueParameters Parameters);
    
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
    
    UFUNCTION(BlueprintCallable)
    void ChangeSeat();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanTeleport() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanShootFromSeat(int32 SeatIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanDriveOnIncline() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanCorrectOrientation(AFortPawn* FP) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanContainPlayers() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanAntigravityOnIncline() const;
    
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
    
};

