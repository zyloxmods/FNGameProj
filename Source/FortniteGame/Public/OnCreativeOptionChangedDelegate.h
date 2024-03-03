#pragma once
#include "CoreMinimal.h"
#include "OnCreativeOptionChangedDelegate.generated.h"

class UFortCreativeOption;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnCreativeOptionChanged, UFortCreativeOption*, ChangedOption, uint8, IndexValue);

