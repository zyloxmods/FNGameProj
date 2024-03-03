#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AttributeSet.h"
#include "FortCachedWeaponOverheatData.h"
#include "VehicleWeapon_RetainedData.h"
#include "WeaponSeatDefinition.h"
#include "FortVehicleSeatWeaponComponent.generated.h"

class AActor;
class AFortPawn;
class AFortWeaponRanged;
class UFortWeaponRangedItemDefinition;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortVehicleSeatWeaponComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> MuzzleSocketNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWeaponSeatDefinition> WeaponSeatDefinitions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ActiveSeatIdx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortWeaponRanged* CachedWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortWeaponRangedItemDefinition* CachedWeaponDef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CachedOverheatMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CachedOverheatValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_OverheatValueRepped, meta=(AllowPrivateAccess=true))
    float OverheatValueRepped;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool bWeaponEquipped;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseVehicleOrientationForShootingCone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bControlledByMultipleSeats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    AActor* ActorBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bReadyToSleep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat TotalShotsAllowedThenShutdown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ShotsFired, meta=(AllowPrivateAccess=true))
    int32 ShotsFired;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool bWeaponOverheatDataHasBeenCached;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FFortCachedWeaponOverheatData CachedWeaponOverheatData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FVehicleWeapon_RetainedData CachedWeaponState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSaveAndRestoreWeaponData;
    
public:
    UFortVehicleSeatWeaponComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_ShotsFired();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_OverheatValueRepped();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMountedWeaponFired(const int32 SeatIdx, int32 ShotsRemaining);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetVehicle() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    float GetOverheatScaler();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetOverheatingMaxValue() const;
    
public:
    UFUNCTION(BlueprintCallable)
    float GetCurrentOverheatValue();
    
    UFUNCTION(BlueprintCallable)
    void EquipVehicleWeapon(AFortPawn* FortPawn, FWeaponSeatDefinition& WeaponSeatDefinition, int32 ItemLevel);
    
};

