#pragma once
#include "CoreMinimal.h"
#include "OnInGameLoadScreenChangedDelegate.generated.h"

class AFortPlayerControllerAthena;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnInGameLoadScreenChanged, AFortPlayerControllerAthena*, PlayerController, bool, bEnableLoadScreen, FText, HUDReasonText);

