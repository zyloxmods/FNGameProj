#pragma once
#include "CoreMinimal.h"
#include "PlayerStateAthenaDelegateDelegate.generated.h"

class AFortPlayerStateAthena;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerStateAthenaDelegate, AFortPlayerStateAthena*, FPSA);

