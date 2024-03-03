#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "Engine/NetSerialization.h"
#include "ExtendToggledDelegateDelegate.h"
#include "FortAthenaSKVehicle.h"
#include "FortRechargingActionTimer.h"
#include "NetTowhookAttachState.h"
#include "SphericalDriveParams.h"
#include "Templates/SubclassOf.h"
#include "TowhookActionDelegateDelegate.h"
#include "TowhookParams.h"
#include "TowhookYankDelegateDelegate.h"
#include "FortOctopusVehicle.generated.h"

class AActor;
class AFortOctopusTowhookAttachableProjectile;
class AFortPlayerPawn;
class UFortOctopusVehicleConfigs;
class UFortVehicleAudioVoice;
class UCameraShake;
class UParticleSystemComponent;
class UPrimitiveComponent;

UCLASS(Blueprintable, MinimalAPI)
class AFortOctopusVehicle : public AFortAthenaSKVehicle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCameraShake* CacheDriverCameraShake;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BounceContactRepulsionForce;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BoostForce;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxVerticalBoostForce;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BoostSpeedKmh;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSphericalDriveParams BaseSphericalDriveParams;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTowhookParams BaseTowhookParams;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TowhookSpringDeformationRateOnGround;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoRetractGrapple;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanHoldGrapple;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TowhookInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TowhookInterpMaxPercentPerSecond;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TowhookMaxInvalidateTargetAngleDeg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float TowhookMaxInvalidateTargetDot;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName InternalBlockerCollisionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortRechargingActionTimer BoostBounceAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortOctopusVehicleConfigs> FortOctopusVehicleConfigsClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECollisionChannel> ProjectileTraceChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ProjectileSpeedKmh;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTowhookActionDelegate OnTowhookShot;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTowhookActionDelegate OnTowhookAttached;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTowhookActionDelegate OnTowhookDetached;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTowhookActionDelegate OnTowhookMissed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTowhookActionDelegate OnTowhookHolstered;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTowhookYankDelegate OnTowhookYanked;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FExtendToggledDelegate OnExtendToggled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ReplicatedAttachState, meta=(AllowPrivateAccess=true))
    FNetTowhookAttachState ReplicatedAttachState;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortOctopusVehicleConfigs* FortOctopusVehicleConfigs;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_NetTowhookAimDir, meta=(AllowPrivateAccess=true))
    FVector_NetQuantizeNormal NetTowhookAimDir;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* CacheCoilIdleTopR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* CacheCoilIdleTopL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* CacheCoilIdleBottomR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* CacheCoilIdleBottomL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* CacheBoostFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* CacheDustFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortVehicleAudioVoice* CacheAudioMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortVehicleAudioVoice* CacheAudioWind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortVehicleAudioVoice* CacheAudioTowCable;
    
public:
    AFortOctopusVehicle();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowCooldownCue(AFortPlayerPawn* Pawn, float Duration);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetTowhookProjectile(AFortOctopusTowhookAttachableProjectile* ProjectileActor);
    
    UFUNCTION(BlueprintCallable)
    void SetTowhookAttachState(UPrimitiveComponent* Component, const FVector& WorldLocation, const FVector& WorldNormal);
    
protected:
    UFUNCTION(BlueprintCallable, Server, Unreliable, WithValidation)
    void ServerUpdateTowhook(FVector_NetQuantizeNormal InNetTowhookAimDir);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetTowhookAttachState(FNetTowhookAttachState InTowhookAttachState);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerBreakTowhook();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateTargetPoint(const bool bAimAssistHitsTarget, const FVector& TargetPoint);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnTowhookYankedInternal(const FVector& YankForce, UPrimitiveComponent* YankedComponent);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_ReplicatedAttachState();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_NetTowhookAimDir();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHitPawn(const FVector& Normal, const float Force, AFortPlayerPawn* HitPawn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHit(const FVector& Location, const FVector& Normal, const float Force, AActor* HitActor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBoostEnd();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnBoostBounceInternal(const FVector& Location, const FVector& Normal, const float Force, UPrimitiveComponent* HitComponent);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBoostBounce(const FVector& Location, const FVector& Normal, const float Force, AActor* HitActor, int32 BounceCount);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBoostBegin();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTowhookInAirExtending() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTowhookHolstered() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTowhookExtending() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTowhookContracting() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTowhookAttached() const;
    
    
    bool IsBoosting() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetTowhookRotation(const bool bInterp) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetTowhookPosition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetTowhookMuzzlePositionInterp() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetTowhookMuzzlePosition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetTowhookCableEndpoints(FVector& OutCableStart, FVector& OutCableEnd) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetTowhookCableAttachLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPrimitiveComponent* GetTowhookAttachedComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetTargetHeading() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetShellRotation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetSeatUpDir() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSeatSteerStrength() const;
    
    UFUNCTION(BlueprintCallable)
    void GetSeatSteerDeltas(float& SeatSteerYawDelta, float& SeatSteerPitchDelta, float& SeatSteerRollDelta);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetSeatRotationVelocity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetSeatRotationTorque() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetSeatRotation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetSeatForwardDir() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetPrimaryContact(bool& bIstouching, FVector& ContactPoint, FVector& ContactNormal) const;
    
    UFUNCTION(BlueprintCallable)
    bool GetIsExtendToggled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAccelerationPercent() const;
    
    UFUNCTION(BlueprintCallable)
    void DestroyTowhookProjectile();
    
private:
    UFUNCTION(BlueprintCallable)
    void CacheParticleFX(UParticleSystemComponent* InCoilTopR, UParticleSystemComponent* InCoilTopL, UParticleSystemComponent* InCoilBottomR, UParticleSystemComponent* InCoilBottomL, UParticleSystemComponent* InBoost, UParticleSystemComponent* InDust);
    
    UFUNCTION(BlueprintCallable)
    void CacheAudioPointers(UFortVehicleAudioVoice* InAudioMovement, UFortVehicleAudioVoice* InAudioWind, UFortVehicleAudioVoice* InAudioTowCable);
    
public:
    UFUNCTION(BlueprintCallable)
    void BreakTowhook();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AimTraceHitsTarget() const;
    
};

