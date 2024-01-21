#pragma once
#include "CoreMinimal.h"
#include "RepairStartedDelegateDelegate.generated.h"

class AFortPlayerController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRepairStartedDelegate, AFortPlayerController*, PlayerController);

