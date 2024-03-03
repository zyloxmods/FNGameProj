#pragma once
#include "CoreMinimal.h"
#include "OnWaveBasedModifiersAppliedDelegateDelegate.generated.h"

class UFortGameplayModifierItemDefinition;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnWaveBasedModifiersAppliedDelegate, const TArray<UFortGameplayModifierItemDefinition*>&, AppliedModifiers);

