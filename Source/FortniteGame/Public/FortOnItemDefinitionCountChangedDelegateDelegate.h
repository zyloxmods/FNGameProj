#pragma once
#include "CoreMinimal.h"
#include "FortOnItemDefinitionCountChangedDelegateDelegate.generated.h"

class UFortItemDefinition;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FFortOnItemDefinitionCountChangedDelegate, UFortItemDefinition*, Definition, int32, Delta);

