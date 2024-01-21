#pragma once
#include "CoreMinimal.h"
#include "FortItemPickerBase.h"
#include "FortHeroLoadoutTeamPerkPicker.generated.h"

class UFortCampaignHeroLoadoutItem;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortHeroLoadoutTeamPerkPicker : public UFortItemPickerBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UFortCampaignHeroLoadoutItem> TargetLoadoutItem;
    
public:
    UFortHeroLoadoutTeamPerkPicker();
    UFUNCTION(BlueprintCallable)
    void SetTargetLoadout(const UFortCampaignHeroLoadoutItem* LoadoutItem);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleDifferentTargetLoadoutSetBP();
    
};

