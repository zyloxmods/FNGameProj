#pragma once
#include "CoreMinimal.h"
#include "OnVehicleStateChangedDelegate.generated.h"

class AActor;
class AFortPlayerPawn;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnVehicleStateChanged, AFortPlayerPawn*, PlayerPawn, AActor*, NewVehicle, AActor*, OldVehicle);

