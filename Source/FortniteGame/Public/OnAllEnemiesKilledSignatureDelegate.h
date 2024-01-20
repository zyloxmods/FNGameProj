#pragma once
#include "CoreMinimal.h"
#include "OnAllEnemiesKilledSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAllEnemiesKilledSignature, float, WarmupDuration);

