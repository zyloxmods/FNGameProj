#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "OnActiveCameraChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnActiveCameraChanged, FGameplayTag, CameraTag);

