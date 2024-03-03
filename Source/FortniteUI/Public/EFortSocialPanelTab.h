#pragma once
#include "CoreMinimal.h"
#include "EFortSocialPanelTab.generated.h"

UENUM(BlueprintType)
enum class EFortSocialPanelTab : uint8 {
    PartyInvitations,
    Friends,
    RecentPlayers,
    Max,
};

