#pragma once
#include "CoreMinimal.h"
#include "OnVehicleFocusedDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnVehicleFocused, AActor*, FocusedVehicle);

