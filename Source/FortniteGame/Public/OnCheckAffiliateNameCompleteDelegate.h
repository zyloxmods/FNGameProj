#pragma once
#include "CoreMinimal.h"
#include "OnCheckAffiliateNameCompleteDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_ThreeParams(FOnCheckAffiliateNameComplete, bool, bSuccess, bool, bWasValidAffiliateName, const FString&, AffilateNameChecked);

