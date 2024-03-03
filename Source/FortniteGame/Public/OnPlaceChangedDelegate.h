#pragma once
#include "CoreMinimal.h"
#include "OnPlaceChangedDelegate.generated.h"

class AFortPlayerStateAthena;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPlaceChanged, AFortPlayerStateAthena*, Sender, int32, NewPlace);

