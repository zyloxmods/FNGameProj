#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OnViewOffsetUpdatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnViewOffsetUpdated, FVector2D, NewOffset);

