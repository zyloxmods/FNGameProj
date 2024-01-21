#pragma once
#include "CoreMinimal.h"
#include "McpPrivacySettings.h"
#include "OnReadPrivacySettingsCompleteDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnReadPrivacySettingsComplete, bool, bSuccess, const FMcpPrivacySettings&, Settings);

