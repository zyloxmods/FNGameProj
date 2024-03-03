#pragma once
#include "CoreMinimal.h"
#include "ArsenicOnGhostVisibilityChangeDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FArsenicOnGhostVisibilityChange, const bool, bIsVisible);

