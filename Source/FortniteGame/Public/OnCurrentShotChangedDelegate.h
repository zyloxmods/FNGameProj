#pragma once
#include "CoreMinimal.h"
#include "OnCurrentShotChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCurrentShotChanged, int32, ShotIndex);

