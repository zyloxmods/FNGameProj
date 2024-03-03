#pragma once
#include "CoreMinimal.h"
#include "FortMountedTurret.h"
#include "FortMountedCannon.generated.h"

class AFortPawn;
class AFortPlayerPawn;

UCLASS(Blueprintable)
class AFortMountedCannon : public AFortMountedTurret {
    GENERATED_BODY()
public:
    AFortMountedCannon();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPostExitVehicle(AFortPawn* ExitingPawn, const int32 SeatIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLaunchPawn(AFortPlayerPawn* Pawn);
    
};

