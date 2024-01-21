#pragma once
#include "CoreMinimal.h"
#include "OnInteractUpdatedDelegate.generated.h"

class UFortInteractContextInfo;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnInteractUpdated, const UFortInteractContextInfo*, ContextInfo);

