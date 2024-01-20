#pragma once
#include "CoreMinimal.h"
#include "EFrontEndCamera.h"
#include "FortTabNavigateRequestDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFortTabNavigateRequest, EFrontEndCamera, State);

