#pragma once
#include "CoreMinimal.h"
#include "OnRequiredKillsForPerkUnlockChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRequiredKillsForPerkUnlockChanged, int32, KillCount);

