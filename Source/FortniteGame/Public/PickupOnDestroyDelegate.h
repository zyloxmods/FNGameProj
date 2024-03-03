#pragma once
#include "CoreMinimal.h"
#include "PickupOnDestroyDelegate.generated.h"

class AFortGameModePickup;
class UFortItemDefinition;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPickupOnDestroy, AFortGameModePickup*, SelfActor, const UFortItemDefinition*, ItemDefinition);

