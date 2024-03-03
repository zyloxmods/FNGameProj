#pragma once
#include "CoreMinimal.h"
#include "CobaltPawnLoadedDelegate.generated.h"

class AFortPlayerController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCobaltPawnLoaded, AFortPlayerController*, PlayerController);

