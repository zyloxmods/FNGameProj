#pragma once
#include "CoreMinimal.h"
#include "OnTotalQuantumChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnTotalQuantumChanged, int32, PrevTotalQuantum, int32, CurrentTotalQuantum);

