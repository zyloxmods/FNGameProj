#pragma once
#include "CoreMinimal.h"
#include "SetPreviewedSceneTheaterDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSetPreviewedSceneTheaterDelegate, const FString&, TheaterId);

