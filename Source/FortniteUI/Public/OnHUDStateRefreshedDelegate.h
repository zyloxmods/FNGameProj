#pragma once
#include "CoreMinimal.h"
#include "FortHUDState.h"
#include "OnHUDStateRefreshedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHUDStateRefreshed, const FFortHUDState&, NewHUDState);

