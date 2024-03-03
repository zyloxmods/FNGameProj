#pragma once
#include "CoreMinimal.h"
#include "FortPublicAccountInfo.h"
#include "CurrentlyViewedAccountInfoChangedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCurrentlyViewedAccountInfoChangedDelegate, FFortPublicAccountInfo, NewInfo);

