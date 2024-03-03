#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "GameplayEffectTypes.h"
#include "GameplayEffectTypes.h"
#include "AttributeSet.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "ActiveVehicleUI.h"
#include "EOstrichDetonationState.h"
#include "FortCharacterVehicle.h"
#include "OstrichWeapon_RetainedData.h"
#include "Templates/SubclassOf.h"
#include "VehicleSpecificUIDetails.h"
#include "FortCharacterVehicle_Ostrich.generated.h"

class AActor;
class AFortWeaponRanged_Ostrich;
class UAbilitySystemComponent;
class UAnimMontage;
class UAudioComponent;
class UBaseStatManager;
class UCapsuleComponent;
class UFortCameraMode;
class UFortOstrichVehicleConfigs;
class UFortVehicleAudioVoice;
class UGameplayEffect;
class UParticleSystem;
class UParticleSystemComponent;
class UPrimitiveComponent;

UCLASS(Blueprintable, MinimalAPI)
class AFortCharacterVehicle_Ostrich : public AFortCharacterVehicle {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bExplodeOnDetonate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector GunnerAimPoint;
    
    UPROPERTY(EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> ShieldActor;
    
    UPROPERTY(EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UAbilitySystemComponent> SelfDestructAbilityComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle DriverPrimaryCooldownHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle DriverSecondaryCooldownHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UGameplayEffect>> KillExplosions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> StopMontagesOnGunnerExit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVehicleSpecificUIDetails> CustomUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FActiveVehicleUI> ActiveUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ApproxGunnerCameraOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LandingMovementLockDurationMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LandingMovementLockDurationMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float KneelingGunnerSeatVerticalOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float KneelingDriverSeatVerticalOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PassengerCameraSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PassengerRootSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BeamScaleName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BeamLifeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BeamAttachName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName OstrichShieldBoostStatName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PassengerCameraFixedVerticalOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PassengerCameraFixedVerticalOffsetNoDriver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DriverPrimaryCooldownTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DriverSecondaryCooldownTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DetonateDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DetonateDelaySelfDestruct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DetonateRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DriverKickMoveLockDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float KickRootMotionDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float KickRootMotionDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShieldBoostCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShieldRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SelfDestructInteractDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AccelFromIdle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AccelFromIdleDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IdleTimeThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LockoutDurationAfterRequestSeatChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxBeamLen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* DriverToGunnerTransition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* GunnerToDriverTransition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ChargeJump, meta=(AllowPrivateAccess=true))
    bool bChargingJump;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bDriverLocalChargingJump;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool bChargingRockets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool bAutomaticallyFiringShotgun;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_Detonating, meta=(AllowPrivateAccess=true))
    EOstrichDetonationState DetonationState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bLocalSimulatedChargingJump;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_IsDashing, meta=(AllowPrivateAccess=true))
    bool bDashing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_Kick, meta=(AllowPrivateAccess=true))
    bool bKickRep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bLoadingRockets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bKickActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bLocalJumpButtonDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bAllowEnter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bAcceleratingFromIdle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float IdleTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float MovingTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float RequestSeatChangeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float ChargeJumpStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float GroundDashStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float ShieldBoostStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float KickStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* SpawnedBeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* SpawnedImpact;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* SpawnedImpactEnemy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* SpawnedSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float BlendedPassengerVerticalCamOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverrideLandingMoveLockDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ShieldBoostResourceCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float KickAnimationDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DestroyDelayAfterExplosion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PawnRotationRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AirDashOverrideAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GunnerAimPointUpdateRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GunnerAimPointTraceRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GroundDashAnimationDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GunnerAimPointUpdateDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MechMissileDamageToGunnerShield;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SimulatedProxyFixupRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableTargetingLaser;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableSimulatedProxyFixup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag RocketSettleCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag RocketFireCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag RocketLoadingCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ReloadShotgunTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag FireShotgunTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag MissilesTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer KickStompTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag IndividualRocketFired;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag IndividualRocketLoaded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag LocalSelfDestructPrimeUnderway;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortCameraMode> DriverChargeJumpCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* BeamTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* BeamHitTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* BeamHitEnemyTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* BeamSourceTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float PassengerCamBlendTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float GunnerAimpointUpdateTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bDriverPrimaryCooldownReady;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bDriverSecondaryCooldownReady;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bBufferedDriverExit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bHoldingSelfDestruct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bLocalDriverRequestedExit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bLocalPrimaryFireButtonDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bLocalSecondaryFireButtonDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bEmoteAudioForceStopped;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bAimedAtEnemy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bAimedAtSky;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortVehicleAudioVoice* NativeLinearMovementAudio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortVehicleAudioVoice* NativeRotationalMovementAudio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAudioComponent* NativeTargetingLaserAudio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortOstrichVehicleConfigs> FortOstrichVehicleConfigsClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortOstrichVehicleConfigs* FortOstrichVehicleConfigs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FOstrichWeapon_RetainedData CachedWeaponState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* PickupCapsuleComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBaseStatManager* OstrichCustomStats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat SelfDestructInStormDelay;
    
public:
    AFortCharacterVehicle_Ostrich();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void SetTargetingLaserAudioComp(UAudioComponent* TargetingLaserAudio);
    
    UFUNCTION(BlueprintCallable)
    void SetShieldActor(AActor* InShieldActor);
    
    UFUNCTION(BlueprintCallable)
    void SetRotationalAudioComp(UFortVehicleAudioVoice* RotAudio);
    
    UFUNCTION(BlueprintCallable)
    void SetLinearAudioComp(UFortVehicleAudioVoice* LinearAudio);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetJumpCharging(bool bNewCharging);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerNotifyDriverInput(bool bIsPrimaryFire);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnStartShotgunReload();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartChargeJump();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Kick();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsDashing();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Detonating();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ChargeJump();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReleaseChargeJump(float ChargeAlpha);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPressShieldBoost();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPressHonk();
    
    UFUNCTION(BlueprintCallable)
    void OnPickupCapsuleBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLoadingRockets(bool bStarting);
    
    UFUNCTION(BlueprintCallable)
    void OnKickStomp();
    
    UFUNCTION(BlueprintCallable)
    void OnKickFinished();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFailedShieldBoost();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDriverSecondaryFire();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDriverPrimaryFire();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDetonateTimerStart(EOstrichDetonationState InDetonationState);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnDashStart();
    
    UFUNCTION(BlueprintCallable)
    void OnDashFinished();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void NotifyBlueprintShotgunReload();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void NotiftyBlueprintShotgunFired();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastDriverInput(bool bIsPrimaryFire);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsShotgunReloading() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRocketOnCooldown() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsGunnerShieldActive();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFiringRockets() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GunnerShieldTakeDamage(float Damage);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetJumpChargeCursor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsDashing() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsChargingJump() const;
    
    UFUNCTION(BlueprintCallable)
    AFortWeaponRanged_Ostrich* GetGunnerWeapon();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetGunnerAimAngleDelta() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool GetGroundSlamBool();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDriverTurnAngleDelta() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetDashAnimationActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float GetChargeJumpingFloat();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetAimPoint() const;
    
    UFUNCTION(BlueprintCallable)
    void GameplayCue_Athena_Ostrich_Reload();
    
    UFUNCTION(BlueprintCallable)
    void GameplayCue_Athena_Ostrich_LoadSingleRocket(TEnumAsByte<EGameplayCueEvent::Type> EventType, FGameplayCueParameters Parameters);
    
    UFUNCTION(BlueprintCallable)
    void GameplayCue_Athena_Ostrich_Load();
    
    UFUNCTION(BlueprintCallable)
    void GameplayCue_Athena_Ostrich_Fire_Stop();
    
    UFUNCTION(BlueprintCallable)
    void GameplayCue_Athena_Ostrich_Fire_Start();
    
    UFUNCTION(BlueprintCallable)
    void GameplayCue_Athena_Ostrich_Fire_Single(TEnumAsByte<EGameplayCueEvent::Type> EventType, FGameplayCueParameters Parameters);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ForceDetonate(bool bExplode);
    
    UFUNCTION(BlueprintCallable)
    void AirDash(const FVector& InDirection, float Speed, float MinVerticalSpeed);
    
};

