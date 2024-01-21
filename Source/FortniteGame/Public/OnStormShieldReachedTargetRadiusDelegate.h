#pragma once
#include "CoreMinimal.h"
#include "OnStormShieldReachedTargetRadiusDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnStormShieldReachedTargetRadius, float, Radius);

