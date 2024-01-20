#pragma once
#include "CoreMinimal.h"
#include "FortPrivateAccountInfo.h"
#include "LocalAccountInfoChangedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FLocalAccountInfoChangedDelegate, FFortPrivateAccountInfo, NewInfo);

