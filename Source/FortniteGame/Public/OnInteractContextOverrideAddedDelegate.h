#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "OnInteractContextOverrideAddedDelegate.generated.h"

class UFortInteractContextInfoWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnInteractContextOverrideAdded, TSubclassOf<UFortInteractContextInfoWidget>, ContextOverride);

