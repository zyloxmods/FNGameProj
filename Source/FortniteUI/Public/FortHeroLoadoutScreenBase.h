#pragma once
#include "CoreMinimal.h"
#include "FortActivatablePanelWithItemPreview.h"
#include "FortHeroLoadoutScreenBase.generated.h"

class UFortCampaignHeroLoadoutItem;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortHeroLoadoutScreenBase : public UFortActivatablePanelWithItemPreview {
    GENERATED_BODY()
public:
    UFortHeroLoadoutScreenBase();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetHeroLoadout(const UFortCampaignHeroLoadoutItem* HeroLoadout);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLoadoutSwitchingAllowed() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsReadOnly() const;
    
};

