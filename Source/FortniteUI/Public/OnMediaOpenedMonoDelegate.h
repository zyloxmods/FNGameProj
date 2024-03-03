#pragma once
#include "CoreMinimal.h"
#include "OnMediaOpenedMonoDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMediaOpenedMono, const FString&, OpenedUrl);

