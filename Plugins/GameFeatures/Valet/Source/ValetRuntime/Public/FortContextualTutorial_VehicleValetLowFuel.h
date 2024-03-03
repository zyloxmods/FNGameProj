#pragma once
#include "CoreMinimal.h"
#include "FortContextualTutorial.h"
#include "FortContextualTutorial_VehicleValetLowFuel.generated.h"

class AActor;
class AFortPlayerPawn;

UCLASS(Blueprintable)
class UFortContextualTutorial_VehicleValetLowFuel : public UFortContextualTutorial {
    GENERATED_BODY()
public:
    UFortContextualTutorial_VehicleValetLowFuel();
private:
    UFUNCTION(BlueprintCallable)
    void HandleVehicleStateChanged(AFortPlayerPawn* PlayerPawn, AActor* NewVehicle, AActor* OldVehicle);
    
    UFUNCTION(BlueprintCallable)
    void HandleStartSkydivingForActivation();
    
};

