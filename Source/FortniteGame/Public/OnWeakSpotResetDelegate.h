#pragma once
#include "CoreMinimal.h"
#include "OnWeakSpotResetDelegate.generated.h"

class ABuildingSMActor;
class AFortPlayerController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnWeakSpotReset, AFortPlayerController*, Controller, const ABuildingSMActor*, ParentBuilding);

