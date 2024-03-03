#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AileronRoll.h"
#include "EAileronRollDirection.h"
#include "FlightControlSurfaces.h"
#include "FlightParams.h"
#include "FortAthenaSKVehicle.h"
#include "FortRechargingActionTimer.h"
#include "ReplicatedControlState.h"
#include "FortAthenaDoghouseVehicle.generated.h"

UCLASS(Blueprintable)
class AFortAthenaDoghouseVehicle : public AFortAthenaSKVehicle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AntiGravityScalerWhenEmpty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraPitchInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraYawInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float PropSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float PropRotation;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BoostTopSpeedKmh;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BoostThrust;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AirbrakeDragCoefficient;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HardRollHeadingMatchRate;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HardRollHeadingSteerRate;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HardRollOffsetPercent;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DivebombSpeedMinKmh;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DivebombSpeedMaxKmh;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DivebombSteerPitchRate;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DivebombHeadingMatchRate;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AileronRollMatchRate;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AileronRollRotationalDampingCoefficient;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AileronRollMaxRotationalDampingTorque;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeBeforeStallWithNoPassengersInAir;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeBeforeStallWithNoPassengersOnGround;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFlightParams BaseFlightParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortRechargingActionTimer BoostAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAileronRoll AileronRoll;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AileronRollDoubleClickSpeed;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFreelookAutoRecenter;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FreelookPitchConstraintDegrees;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FreelookYawConstraintDegrees;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FreelookSensitivity;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MouseSteerSensitivity;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FreelookInterpolation;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FreelookReturnAcceleration;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FreelookReturnDecelleration;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ShootCenterPointSocket;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShootAimAheadDistance;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ControlState, meta=(AllowPrivateAccess=true))
    FReplicatedControlState ControlState;
    
public:
    AFortAthenaDoghouseVehicle();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION(BlueprintCallable, Server, Unreliable, WithValidation)
    void ServerUpdateControlState(FReplicatedControlState InControlState);
    
protected:
    UFUNCTION(BlueprintCallable, Server, Unreliable, WithValidation)
    void ServerBeginAileronRoll(EAileronRollDirection Direction);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTakeoff();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_ControlState();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLanding();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEngineStop();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEngineStart();
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MultiBeginAileronRoll(EAileronRollDirection Direction);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStandingInPlace() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStallingFromAltitude() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRollingRight() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRollingLeft() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRollingInverted() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFreelooking() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFlying() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEngineOn() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEngineAutoStartingInAir() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAileronRolling() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetStandingInPlaceSteeringAngle() const;
    
    UFUNCTION(BlueprintCallable)
    FVector GetShootCenterPointLocal();
    
    UFUNCTION(BlueprintCallable)
    FVector GetShootCenterPoint();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetFlightControlTorque() const;
    
    UFUNCTION(BlueprintCallable)
    FFlightControlSurfaces GetFlightControlSurfaceTargets() const;
    
    UFUNCTION(BlueprintCallable)
    FFlightControlSurfaces GetFlightControlSurfaces() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetFlightControlForce() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAltitudeZ() const;
    
    UFUNCTION(BlueprintCallable)
    FVector GetAimPointLocal();
    
    UFUNCTION(BlueprintCallable)
    FVector GetAimPoint();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EAileronRollDirection GetAileronRollDirection() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GasPedalIsDown() const;
    
};

