#pragma once
#include "CoreMinimal.h"
#include "FortTeamMember.h"
#include "FortTeamMemberCampaign.generated.h"

UCLASS(Blueprintable, Within=FortCampaignTeam)
class FORTNITEGAME_API UFortTeamMemberCampaign : public UFortTeamMember {
    GENERATED_BODY()
public:
    UFortTeamMemberCampaign();
};

