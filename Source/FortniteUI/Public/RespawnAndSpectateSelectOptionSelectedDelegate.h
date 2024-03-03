#pragma once
#include "CoreMinimal.h"
#include "RespawnAndSpectateSelectOptionSelectedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRespawnAndSpectateSelectOptionSelected, int32, SelectedOption);

