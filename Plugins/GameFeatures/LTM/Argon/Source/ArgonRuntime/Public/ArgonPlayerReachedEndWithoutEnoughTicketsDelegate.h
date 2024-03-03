#pragma once
#include "CoreMinimal.h"
#include "ArgonPlayerReachedEndWithoutEnoughTicketsDelegate.generated.h"

class AFortPlayerStateAthena;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FArgonPlayerReachedEndWithoutEnoughTickets, AFortPlayerStateAthena*, PlayerState, int32, NumTicketsAcquired);

