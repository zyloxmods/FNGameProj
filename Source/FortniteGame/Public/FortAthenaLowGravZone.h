#pragma once
#include "CoreMinimal.h"
#include "BuildingGameplayActor.h"
#include "FortAthenaLowGravZone.generated.h"

class AFortAthenaVehicle;

UCLASS(Blueprintable)
class AFortAthenaLowGravZone : public ABuildingGameplayActor {
    GENERATED_BODY()
public:
    AFortAthenaLowGravZone();
    UFUNCTION(BlueprintCallable)
    void OnVehicleExitZone(AFortAthenaVehicle* Vehicle);
    
    UFUNCTION(BlueprintCallable)
    void OnVehicleEnterZone(AFortAthenaVehicle* Vehicle, float GravityMultiplier);
    
};

