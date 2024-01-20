#pragma once
#include "CoreMinimal.h"
#include "EFrontEndCamera.h"
#include "OnCameraChangedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnCameraChangedDelegate, EFrontEndCamera, NewCamera, EFrontEndCamera, OldCamera);

