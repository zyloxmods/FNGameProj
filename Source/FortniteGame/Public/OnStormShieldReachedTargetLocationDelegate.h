#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OnStormShieldReachedTargetLocationDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnStormShieldReachedTargetLocation, FVector, Location);

