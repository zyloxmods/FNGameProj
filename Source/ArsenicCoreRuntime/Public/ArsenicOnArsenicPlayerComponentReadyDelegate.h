#pragma once
#include "CoreMinimal.h"
#include "ArsenicOnArsenicPlayerComponentReadyDelegate.generated.h"

class AFortPlayerControllerAthena;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FArsenicOnArsenicPlayerComponentReady, const AFortPlayerControllerAthena*, PlayerController);

