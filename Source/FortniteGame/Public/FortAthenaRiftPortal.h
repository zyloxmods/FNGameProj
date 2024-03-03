#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "BuildingGameplayActorConsumable.h"
#include "VehicleTeleportPortal.h"
#include "FortAthenaRiftPortal.generated.h"

class AActor;

UCLASS(Blueprintable)
class AFortAthenaRiftPortal : public ABuildingGameplayActorConsumable, public IVehicleTeleportPortal {
    GENERATED_BODY()
public:
    AFortAthenaRiftPortal();
    UFUNCTION(BlueprintCallable)
    void TeleportVehicleFacing(AActor* Vehicle, const FVector& TeleportLocation, const FRotator& Rot);
    
    UFUNCTION(BlueprintCallable)
    void TeleportVehicle(AActor* Vehicle, const FVector& TeleportLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OverlappingOnBeginPlay(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void NotifyTeleportedVehicle(AActor* VehicleActor);
    
    
    // Fix for true pure virtual functions not being implemented
};

