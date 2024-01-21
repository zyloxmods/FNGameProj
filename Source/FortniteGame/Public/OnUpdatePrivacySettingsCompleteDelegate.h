#pragma once
#include "CoreMinimal.h"
#include "OnUpdatePrivacySettingsCompleteDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOnUpdatePrivacySettingsComplete, bool, bSuccess);

