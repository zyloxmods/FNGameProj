#pragma once
#include "CoreMinimal.h"
#include "CrossplayPreferenceChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCrossplayPreferenceChanged, bool, IsCrossplayEnabled);

