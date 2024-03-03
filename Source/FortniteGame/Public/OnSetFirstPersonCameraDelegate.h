#pragma once
#include "CoreMinimal.h"
#include "OnSetFirstPersonCameraDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSetFirstPersonCamera, bool, bFirstPersonCameraEnabled);

