#pragma once
#include "CoreMinimal.h"
#include "OnHeavySoundTriggeredDelegate.generated.h"

class UAudioComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHeavySoundTriggered, UAudioComponent*, Sound);

