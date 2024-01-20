#pragma once
#include "CoreMinimal.h"
#include "OnFOBCoresLoadedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFOBCoresLoaded, uint8, Team);

