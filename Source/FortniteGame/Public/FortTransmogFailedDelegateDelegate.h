#pragma once
#include "CoreMinimal.h"
#include "FortTransmogFailedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFortTransmogFailedDelegate, const FText&, ErrorMessage);

