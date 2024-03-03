#pragma once
#include "CoreMinimal.h"
#include "OnValetShiftGearDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnValetShiftGearDelegate, bool, bUpshift);

