#pragma once
#include "CoreMinimal.h"
#include "PropertyOverrideData.h"
#include "OnMutatorListSettingsChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMutatorListSettingsChanged, const FPropertyOverrideData&, OverrideData);

