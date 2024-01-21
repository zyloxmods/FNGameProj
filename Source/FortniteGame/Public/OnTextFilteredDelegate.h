#pragma once
#include "CoreMinimal.h"
#include "OnTextFilteredDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnTextFiltered, bool, bSuccess, const FString&, SanitizedMsg);

