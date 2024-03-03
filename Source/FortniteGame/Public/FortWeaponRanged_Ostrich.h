#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "AttributeSet.h"
#include "GameplayTagContainer.h"
#include "FortWeaponRangedForVehicle.h"
#include "Templates/SubclassOf.h"
#include "WeaponHudData.h"
#include "FortWeaponRanged_Ostrich.generated.h"

class AFortProjectileBase;
class UAnimMontage;
class UFortGameplayAbility;
class USceneComponent;

UCLASS(Blueprintable)
class AFortWeaponRanged_Ostrich : public AFortWeaponRangedForVehicle {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AFortProjectileBase> ProjectileTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_RocketsCooldown, meta=(AllowPrivateAccess=true))
    bool bRocketsOnCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bLocalChargingRockets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bRocketFireButtonDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 RocketAmmoLocal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 ServerLoadedRockets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bFiringRockets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bUseShotgunSecondBarrel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float RocketFireTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float RocketChargeTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat FireRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat AutofireDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat RocketsCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat TimeToLoadOneAmmoCharge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat AimPointCacheRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat MinRocketsForFiring;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat AmmoPerCharge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat MaxRockets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SecondaryFireMuzzleName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SecondaryFireTraceSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ShotgunSecondBarrelMuzzleName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StartLoadingSectionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* RocketChargingLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* RocketFullyChargedLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* RocketFire;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* RocketFireSettle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* RocketCooldownLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* RocketCooldownReady;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* ShotgunFireSecondBarrel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWeaponHudData> GamepadHudKeyActionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer LoadRocketTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle AutoFireTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle ReloadShotgunTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle ServerSideRocketCooldownTimer;
    
public:
    AFortWeaponRanged_Ostrich();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetFiringRockets(bool bNewFiring, int32 NumToFire);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetCharging(bool bNewCharging);
    
public:
    UFUNCTION(BlueprintCallable)
    void PlayReloadAnim();
    
    UFUNCTION(BlueprintCallable)
    void OnServerLoadSingleRocket();
    
    UFUNCTION(BlueprintCallable)
    void OnServerActivateSecondaryFire(UFortGameplayAbility* SecondaryFire, const FVector& LaunchPosition);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRocketLauncherSettle(USceneComponent* AttachToMesh, FName AttachToSocket);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRocketFiringStarted(USceneComponent* AttachToMesh, FName AttachToSocket);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRocketFired(USceneComponent* AttachToMesh, FName AttachToSocket);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_RocketsCooldown();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLoadedRockets(int32 NumRocketsLoaded);
    
    UFUNCTION(BlueprintCallable)
    void LoadShotgunAmmo();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTimeToLoadOneAmmoCharge() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRocketsCooldown() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMinRocketsForFiring() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxRockets() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFireRate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAutofireDelay() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAmmoPerCharge() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAimPointCacheRange() const;
    
};

