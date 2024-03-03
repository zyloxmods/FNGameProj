#pragma once
#include "CoreMinimal.h"
#include "SettingValueChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSettingValueChanged, float, Value);

