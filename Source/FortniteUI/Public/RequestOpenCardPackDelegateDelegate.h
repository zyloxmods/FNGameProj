#pragma once
#include "CoreMinimal.h"
#include "RequestOpenCardPackDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRequestOpenCardPackDelegate, int32, PackIndex);

