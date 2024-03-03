#pragma once
#include "CoreMinimal.h"
#include "SphericalPontoon.h"
#include "OnPontoonExitedWaterDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPontoonExitedWater, const FSphericalPontoon&, Pontoon);

