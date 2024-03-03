#pragma once
#include "CoreMinimal.h"
#include "CobaltPreRoundDisplayVisibilityDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCobaltPreRoundDisplayVisibility, bool, bNewVisibility);

