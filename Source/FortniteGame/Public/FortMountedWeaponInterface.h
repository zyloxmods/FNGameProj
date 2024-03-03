#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "FortMountedWeaponInterface.generated.h"

class AActor;
class UFortVehicleSeatWeaponComponent;

UINTERFACE(BlueprintType, meta=(CannotImplementInterfaceInBlueprint))
class UFortMountedWeaponInterface : public UInterface {
    GENERATED_BODY()
};

class IFortMountedWeaponInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual UFortVehicleSeatWeaponComponent* GetWeaponComponentCached() PURE_VIRTUAL(GetWeaponComponentCached, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    virtual AActor* GetHostVehicleCached() PURE_VIRTUAL(GetHostVehicleCached, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    virtual void AddToIgnoreActors(AActor* Actor) PURE_VIRTUAL(AddToIgnoreActors,);
    
};

