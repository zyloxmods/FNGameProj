#pragma once
#include "CoreMinimal.h"
#include "ItemDefinitionChangedDelegateDelegate.generated.h"

class UFortItem;
class UFortItemDefinition;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FItemDefinitionChangedDelegate, UFortItem*, Item, UFortItemDefinition*, ItemDefinition);

