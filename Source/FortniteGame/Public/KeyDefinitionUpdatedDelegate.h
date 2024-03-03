#pragma once
#include "CoreMinimal.h"
#include "KeyDefinitionUpdatedDelegate.generated.h"

class UFortItemDefinition;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FKeyDefinitionUpdated, UFortItemDefinition*, NewKeydefinition);

