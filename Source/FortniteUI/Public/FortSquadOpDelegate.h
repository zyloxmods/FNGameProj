#pragma once
#include "CoreMinimal.h"
#include "FortSquadOpDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FFortSquadOp, FName, SquadId, int32, SquadSlotIndex);

