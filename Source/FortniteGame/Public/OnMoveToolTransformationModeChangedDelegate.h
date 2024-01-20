#pragma once
#include "CoreMinimal.h"
#include "ETransformationType.h"
#include "OnMoveToolTransformationModeChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMoveToolTransformationModeChanged, ETransformationType, TransformationType);

