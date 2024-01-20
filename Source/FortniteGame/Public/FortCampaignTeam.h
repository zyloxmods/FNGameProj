#pragma once
#include "CoreMinimal.h"
#include "FortLocalTeam.h"
#include "FortCampaignTeam.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortCampaignTeam : public UFortLocalTeam {
    GENERATED_BODY()
public:
    UFortCampaignTeam();
};

