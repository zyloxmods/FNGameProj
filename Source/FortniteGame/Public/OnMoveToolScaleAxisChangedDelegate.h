#pragma once
#include "CoreMinimal.h"
#include "EScaleAxis.h"
#include "OnMoveToolScaleAxisChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMoveToolScaleAxisChanged, EScaleAxis, ScaleAxis);

