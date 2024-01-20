#pragma once
#include "CoreMinimal.h"
#include "OnWarmupEndedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnWarmupEndedSignature, float, EncounterDuration);

