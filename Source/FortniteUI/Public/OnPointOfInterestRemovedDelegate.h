#pragma once
#include "CoreMinimal.h"
#include "OnPointOfInterestRemovedDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPointOfInterestRemoved, AActor*, PointOfInterest);

