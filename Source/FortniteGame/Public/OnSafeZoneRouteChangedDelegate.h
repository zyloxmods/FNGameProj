#pragma once
#include "CoreMinimal.h"
#include "SafeZoneRoute.h"
#include "OnSafeZoneRouteChangedDelegate.generated.h"

class AFortAthenaMutator_CustomStormMovement;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnSafeZoneRouteChanged, AFortAthenaMutator_CustomStormMovement*, Mutator, const FSafeZoneRoute&, SafeZoneRoute);

