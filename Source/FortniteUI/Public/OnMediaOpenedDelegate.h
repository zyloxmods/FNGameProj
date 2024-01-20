#pragma once
#include "CoreMinimal.h"
#include "OnMediaOpenedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMediaOpened, const FString&, OpenedUrl);

