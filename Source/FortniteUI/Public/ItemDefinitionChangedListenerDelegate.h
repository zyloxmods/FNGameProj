#pragma once
#include "CoreMinimal.h"
#include "ItemDefinitionChangedListenerDelegate.generated.h"

class UFortItem;
class UFortItemDefinition;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FItemDefinitionChangedListener, UFortItem*, Item, UFortItemDefinition*, ItemDefinition);

