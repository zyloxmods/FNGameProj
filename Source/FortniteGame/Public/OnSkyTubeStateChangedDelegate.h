#pragma once
#include "CoreMinimal.h"
#include "OnSkyTubeStateChangedDelegate.generated.h"

class AFortSkyTube;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSkyTubeStateChanged, AFortSkyTube*, SkyTube);

