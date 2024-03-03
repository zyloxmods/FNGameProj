#pragma once
#include "CoreMinimal.h"
#include "FortContextualTutorial.h"
#include "FortContextualTutorial_Vehicle.generated.h"

class AActor;
class AFortPlayerPawn;

UCLASS(Blueprintable)
class UFortContextualTutorial_Vehicle : public UFortContextualTutorial {
    GENERATED_BODY()
public:
    UFortContextualTutorial_Vehicle();
private:
    UFUNCTION(BlueprintCallable)
    void HandleVehicleStateChanged(AFortPlayerPawn* PlayerPawn, AActor* NewVehicle, AActor* OldVehicle);
    
    UFUNCTION(BlueprintCallable)
    void AileronRollCallback();
    
};

