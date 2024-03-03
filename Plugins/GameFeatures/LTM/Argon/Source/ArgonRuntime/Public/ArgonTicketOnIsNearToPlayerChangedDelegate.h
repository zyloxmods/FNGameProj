#pragma once
#include "CoreMinimal.h"
#include "ArgonTicketOnIsNearToPlayerChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FArgonTicketOnIsNearToPlayerChanged, bool, bIsNearToPlayer);

