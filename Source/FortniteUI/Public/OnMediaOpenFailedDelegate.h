#pragma once
#include "CoreMinimal.h"
#include "OnMediaOpenFailedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMediaOpenFailed, const FString&, OpenedUrl);

