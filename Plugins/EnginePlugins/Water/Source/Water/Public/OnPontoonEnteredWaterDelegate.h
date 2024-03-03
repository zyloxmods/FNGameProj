#pragma once
#include "CoreMinimal.h"
#include "SphericalPontoon.h"
#include "OnPontoonEnteredWaterDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPontoonEnteredWater, const FSphericalPontoon&, Pontoon);

