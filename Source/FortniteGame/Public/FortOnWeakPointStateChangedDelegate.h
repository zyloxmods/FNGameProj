#pragma once
#include "CoreMinimal.h"
#include "EFortWeakPointState.h"
#include "FortOnWeakPointStateChangedDelegate.generated.h"

class AFortWeakPoint;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FFortOnWeakPointStateChanged, AFortWeakPoint*, WeakPoint, EFortWeakPointState, NewState);

