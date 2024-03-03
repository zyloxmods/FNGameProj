#pragma once
#include "CoreMinimal.h"
#include "OnInteractionFailedCallbackDelegate.generated.h"

class AFortPlayerPawnAthena;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnInteractionFailedCallback, AFortPlayerPawnAthena*, FortPlayerPawnAthena);

