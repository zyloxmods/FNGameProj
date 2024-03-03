#pragma once
#include "CoreMinimal.h"
#include "OnStormShieldComponentCreatedDelegate.generated.h"

class UFortStormShieldComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnStormShieldComponentCreated, UFortStormShieldComponent*, StormShieldComponent);

