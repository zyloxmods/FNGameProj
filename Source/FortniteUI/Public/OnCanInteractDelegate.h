#pragma once
#include "CoreMinimal.h"
#include "OnCanInteractDelegate.generated.h"

class UFortInteractContextInfo;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCanInteract, const UFortInteractContextInfo*, ContextInfo);

