#pragma once
#include "CoreMinimal.h"
#include "PropertyOverrideData.h"
#include "OnMutatorListSettingsInitializedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMutatorListSettingsInitialized, const FPropertyOverrideData&, OverrideData);

