#pragma once
#include "CoreMinimal.h"
#include "OnPlayerLoginToFOBDelegate.generated.h"

class AFortPlayerController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerLoginToFOB, AFortPlayerController*, PlayerController);

