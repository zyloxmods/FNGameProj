#pragma once
#include "CoreMinimal.h"
#include "OnEncounterTimeoutSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEncounterTimeoutSignature, int32, AliveEnemies);

