#pragma once
#include "CoreMinimal.h"
#include "BuildingGameplayActor.h"
#include "FortAthenaLowGravZone.generated.h"

class AActor;

UCLASS(Blueprintable)
class AFortAthenaLowGravZone : public ABuildingGameplayActor {
    GENERATED_BODY()
public:
    AFortAthenaLowGravZone();
    UFUNCTION(BlueprintCallable)
    void OnVehicleExitZone(AActor* Vehicle);
    
    UFUNCTION(BlueprintCallable)
    void OnVehicleEnterZone(AActor* Vehicle, float GravityMultiplier);
    
};

