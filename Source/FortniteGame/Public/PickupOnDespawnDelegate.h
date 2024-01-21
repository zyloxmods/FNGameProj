#pragma once
#include "CoreMinimal.h"
#include "PickupOnDespawnDelegate.generated.h"

class AFortPickup;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPickupOnDespawn, AFortPickup*, SelfActor);

