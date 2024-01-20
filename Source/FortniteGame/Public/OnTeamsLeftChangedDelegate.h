#pragma once
#include "CoreMinimal.h"
#include "OnTeamsLeftChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTeamsLeftChanged, int32, NumTeamsLeft);

