#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "ActiveVehicleUI.h"
#include "FortAthenaSKVehicle.h"
#include "VehicleSpecificUIDetails.h"
#include "CachedSeatCollision.h"
#include "FortHeliFlightModel.h"
#include "HoagieAltimeterTraceUpdatedDelegateDelegate.h"
#include "HoagieBoostStateDelegateDelegate.h"
#include "ReplicatedHeliControlState.h"
#include "RotorHit.h"
#include "Templates/SubclassOf.h"
#include "FortHoagieVehicle.generated.h"

class AActor;
class AController;
class UAnimMontage;
class UCurveFloat;
class UFortAthenaVehicleFuelComponent;
class UFortHoagieVehicleAnimInstance;
class UFortHoagieVehicleConfigs;
class UNiagaraComponent;

UCLASS(Blueprintable, MinimalAPI)
class AFortHoagieVehicle : public AFortAthenaSKVehicle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PassengerCollision;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraBoomDistance;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraBoomHeight;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHoagieBoostStateDelegate OnBoostStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHoagieAltimeterTraceUpdatedDelegate OnAltimeterTraceUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHoagieAltimeterTraceUpdatedDelegate OnCrashingStateEntered;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LiftRumbleTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bLiftUp;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint64 LiftForceFeedbackHandle;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint64 PassiveForceFeedbackHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float Theta_Native;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float WashAltAlpha_Native;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float RotorWashTickTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FVector> RotorTraceArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TEnumAsByte<EObjectTypeQuery>> RotorWashObjectsTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortHoagieVehicleConfigs* FortHoagieVehicleConfigs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVehicleSpecificUIDetails> CustomUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVehicleSpecificUIDetails> CustomFuelUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* RumbleIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FActiveVehicleUI> ActiveUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFortHeliFlightModel FlightModel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bClearPitchInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bBoosting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float BoostTimeLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float BoostBrakingTimeLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float BoostCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float ShutdownTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float FoliageDestructionTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CrashingScrapingTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CrashingNotMovingTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bCanSleep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bHasAppliedCrashDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bOrientedForLanding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bForceNegativeLift;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bExploded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float AltimeterTraceTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LastRotorImpulseTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CriticalExplodeTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float TimeWhileCritical;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float TimeWhileLanding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LiftFromOverrideButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector BoostDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector LastRotorSweepDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FHitResult AltimeterTraceResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_HoagieState, meta=(AllowPrivateAccess=true))
    int32 HoagieStateRep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CurrentRotorSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CurrentRotorAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float RotorImpactTraceAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float MoveUpPressTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float MoveDownPressTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float ServerCriticalHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FRotorHit> RotorHits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FCachedSeatCollision> CachedSeatCollision;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortAthenaVehicleFuelComponent* FuelComponent;
    
    UPROPERTY(EditAnywhere, ReplicatedUsing=OnRep_IsUsingNewFuelSystemState, meta=(AllowPrivateAccess=true))
    int8 IsUsingNewFuelSystemState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* HoagieIdleFX_Native;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* DamageFX_Native;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* RotorWashFX_Native;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortHoagieVehicleAnimInstance* HoagieAnimBP_Native;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortHoagieVehicleConfigs> FortHoagieVehicleConfigsClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AltimeterTraceSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RotorDamageTraceSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MainRotorCritSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TailRotorCritSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* SeatTransition_ToDriver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* SeatTransition_ToPassenger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RotorTraceProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FoliageOverlapsBoxTag;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AController> KillerController;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> KillerCauser;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ControlState, meta=(AllowPrivateAccess=true))
    FReplicatedHeliControlState ControlState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CurrentViewDistanceScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CurrentHLODDistanceOverrideScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CurrentHLODMaxDrawDistanceScale;
    
public:
    AFortHoagieVehicle();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateDamageStateNative(float Damage);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTailRotorRotation(float Degrees);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetRotorWashActive(bool bActive);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetMainRotorRotation(float Degrees);
    
private:
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void ServerUpdateControlState(FReplicatedHeliControlState InControlState);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTickRotors(float RotorAngleDegrees);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartupEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartupBegin();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartCriticalHealth();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRotorsStop();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRotorDamagePlayer(const FHitResult& Impact);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRotorDamageDealtOuter(const FHitResult& Impact);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRotorDamageDealtInner(const FHitResult& Impact);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRotorDamageDealt(const FHitResult& Impact, bool bInner);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsUsingNewFuelSystemState();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_HoagieState();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_ControlState();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRefueledFromEmpty();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnImpactWhileCritical();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnImpactOtherHoagie(const FVector& HitLocation, const FVector& NormalImpulse);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnExplode();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCritRotor(float Damage, const FVector& ImpactLocation, AController* DamageInstigator, AActor* DamageCauser, bool bMainRotor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBoostStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBoostReady();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBoostFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBoostFailed();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastRotorImpulse(const FHitResult& RotorHit);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStartingUp() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsShuttingDown() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsScrapingBottom() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetVerticalSpeedKmh() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetThrustDirection(bool bWorldSpace) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetStrafeAlpha() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSteerAlpha() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetShutdownTimeLeft() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRotorSpeedPercent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRotorSpeed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetRotorCenterPosition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRotorAngleDegrees() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxBoostCooldown() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxAltitude() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLiftAlpha() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsEngineOn() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsCriticalHealth() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetForwardAlpha() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDistanceToGround() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBoostTimeLeft() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBoostDuration() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetBoostDirection() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBoostCooldown() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAltitude() const;
    
};

