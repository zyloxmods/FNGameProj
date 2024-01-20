#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BuildingGameplayActorConsumable.h"
#include "VehicleTeleportPortal.h"
#include "FortAthenaRiftPortal.generated.h"

class AActor;
class AFortAthenaVehicle;

UCLASS(Blueprintable)
class AFortAthenaRiftPortal : public ABuildingGameplayActorConsumable, public IVehicleTeleportPortal {
    GENERATED_BODY()
public:
    AFortAthenaRiftPortal();
    UFUNCTION(BlueprintCallable)
    void TeleportVehicle(AFortAthenaVehicle* Vehicle, const FVector& TeleportLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OverlappingOnBeginPlay(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void NotifyTeleportedVehicle(AFortAthenaVehicle* Vehicle);
    
    
    // Fix for true pure virtual functions not being implemented
};

