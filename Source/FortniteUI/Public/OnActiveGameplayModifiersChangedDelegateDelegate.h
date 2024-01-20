#pragma once
#include "CoreMinimal.h"
#include "OnActiveGameplayModifiersChangedDelegateDelegate.generated.h"

class UFortGameplayModifierItemDefinition;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnActiveGameplayModifiersChangedDelegate, const TArray<UFortGameplayModifierItemDefinition*>&, AppliedModifiers);

