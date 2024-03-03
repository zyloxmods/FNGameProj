#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "OnInteractContextOverrideRemovedDelegate.generated.h"

class UFortInteractContextInfoWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnInteractContextOverrideRemoved, TSubclassOf<UFortInteractContextInfoWidget>, ContextOverride);

