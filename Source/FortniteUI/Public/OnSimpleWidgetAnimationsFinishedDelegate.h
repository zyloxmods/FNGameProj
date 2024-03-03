#pragma once
#include "CoreMinimal.h"
#include "OnSimpleWidgetAnimationsFinishedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSimpleWidgetAnimationsFinished, FName, Name);

