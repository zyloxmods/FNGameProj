#pragma once
#include "CoreMinimal.h"
#include "PickupOnCombinedDelegate.generated.h"

class AFortPickup;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPickupOnCombined, AFortPickup*, ThisPickup, AFortPickup*, TargetPickup);

