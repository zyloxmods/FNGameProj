#pragma once
#include "CoreMinimal.h"
#include "OnDBNOStateChangedEventDelegate.generated.h"

class AFortPawn;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnDBNOStateChangedEvent, AFortPawn*, FortPawn, bool, bInIsDBNO);

