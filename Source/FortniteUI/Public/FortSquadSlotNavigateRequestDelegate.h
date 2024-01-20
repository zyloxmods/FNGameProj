#pragma once
#include "CoreMinimal.h"
#include "FortSquadSlotNavigateRequestDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FFortSquadSlotNavigateRequest, FName, SquadId, int32, SquadSlotIndex);

