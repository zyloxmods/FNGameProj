#pragma once
#include "CoreMinimal.h"
#include "TriggerSetupVehicleFuelWidgetDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FTriggerSetupVehicleFuelWidget, AActor*, NewVehicle, const bool, bRequestShowWidget);

