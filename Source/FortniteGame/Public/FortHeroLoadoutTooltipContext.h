#pragma once
#include "CoreMinimal.h"
#include "FortTooltipContext.h"
#include "FortHeroLoadoutTooltipContext.generated.h"

class UFortCampaignHeroLoadoutItem;

UCLASS(Blueprintable)
class UFortHeroLoadoutTooltipContext : public UFortTooltipContext {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UFortCampaignHeroLoadoutItem> HeroLoadout;
    
    UFortHeroLoadoutTooltipContext();
};

