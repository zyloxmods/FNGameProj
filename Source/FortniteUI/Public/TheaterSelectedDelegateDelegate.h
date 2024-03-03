#pragma once
#include "CoreMinimal.h"
#include "TheaterSelectedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTheaterSelectedDelegate, const FString&, TheaterId);

