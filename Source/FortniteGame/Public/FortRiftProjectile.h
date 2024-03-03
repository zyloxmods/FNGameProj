#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FortProjectileBase.h"
#include "VehicleTeleportPortal.h"
#include "FortRiftProjectile.generated.h"

class AActor;

UCLASS(Blueprintable)
class AFortRiftProjectile : public AFortProjectileBase, public IVehicleTeleportPortal {
    GENERATED_BODY()
public:
    AFortRiftProjectile();
    UFUNCTION(BlueprintCallable)
    void TeleportVehicle(AActor* Vehicle, const FVector& TeleportLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void NotifyTeleportedVehicle(AActor* VehicleActor);
    
    
    // Fix for true pure virtual functions not being implemented
};

