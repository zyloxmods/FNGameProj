#pragma once
#include "CoreMinimal.h"
#include "OnFortPlayerDiedDelegate.generated.h"

class AFortPlayerPawnAthena;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFortPlayerDied, AFortPlayerPawnAthena*, FortPlayerPawnAthena);

