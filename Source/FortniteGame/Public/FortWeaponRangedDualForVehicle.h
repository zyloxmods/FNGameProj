#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "FortMountedWeaponInterface.h"
#include "FortWeaponRangedDual.h"
#include "MountedWeaponInfo.h"
#include "MountedWeaponInfoRepped.h"
#include "FortWeaponRangedDualForVehicle.generated.h"

class AActor;
class UFortVehicleSeatWeaponComponent;

UCLASS(Blueprintable)
class AFortWeaponRangedDualForVehicle : public AFortWeaponRangedDual, public IFortMountedWeaponInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMountedWeaponInfo MountedWeaponInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MountedWeaponInfoRepped, meta=(AllowPrivateAccess=true))
    FMountedWeaponInfoRepped MountedWeaponInfoRepped;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LeftWeaponLoc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator LeftWeaponRot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector RightWeaponLoc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator RightWeaponRot;
    
public:
    AFortWeaponRangedDualForVehicle();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_MountedWeaponInfoRepped();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHostVehicleSetup();
    
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    UFortVehicleSeatWeaponComponent* GetWeaponComponentCached() override PURE_VIRTUAL(GetWeaponComponentCached, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    AActor* GetHostVehicleCached() override PURE_VIRTUAL(GetHostVehicleCached, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    void AddToIgnoreActors(AActor* Actor) override PURE_VIRTUAL(AddToIgnoreActors,);
    
};

