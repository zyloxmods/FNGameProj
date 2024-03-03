#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "FortMountedWeaponInterface.h"
#include "FortWeaponRanged.h"
#include "MountedWeaponInfo.h"
#include "MountedWeaponInfoRepped.h"
#include "FortWeaponRangedForVehicle.generated.h"

class AActor;
class UFortVehicleSeatWeaponComponent;

UCLASS(Blueprintable)
class AFortWeaponRangedForVehicle : public AFortWeaponRanged, public IFortMountedWeaponInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMountedWeaponInfo MountedWeaponInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MountedWeaponInfoRepped, meta=(AllowPrivateAccess=true))
    FMountedWeaponInfoRepped MountedWeaponInfoRepped;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector WeaponLoc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator WeaponRot;
    
public:
    AFortWeaponRangedForVehicle();
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

