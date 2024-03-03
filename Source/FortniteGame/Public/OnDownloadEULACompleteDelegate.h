#pragma once
#include "CoreMinimal.h"
#include "OnDownloadEULACompleteDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_ThreeParams(FOnDownloadEULAComplete, bool, bSuccessful, FText, EULAText, const FString&, Key);

