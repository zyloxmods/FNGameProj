#pragma once
#include "CoreMinimal.h"
#include "TrapAttachedDelegateDelegate.generated.h"

class ABuildingTrap;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FTrapAttachedDelegate, const ABuildingTrap*, Trap, const bool, bDetached);

