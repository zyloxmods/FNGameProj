#pragma once
#include "CoreMinimal.h"
#include "TheaterPinClickedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTheaterPinClickedDelegate, const FString&, TheaterId);

