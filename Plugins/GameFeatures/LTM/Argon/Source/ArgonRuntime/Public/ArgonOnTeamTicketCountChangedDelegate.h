#pragma once
#include "CoreMinimal.h"
#include "ArgonOnTeamTicketCountChangedDelegate.generated.h"

class AFortPlayerStateAthena;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FArgonOnTeamTicketCountChanged, uint8, Team, AFortPlayerStateAthena*, PickedUpByPlayer, int32, NewTicketCount, bool, bHasAllTickets);

