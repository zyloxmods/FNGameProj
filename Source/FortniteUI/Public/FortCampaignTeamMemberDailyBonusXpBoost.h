#pragma once
#include "CoreMinimal.h"
#include "FortCampaignTeamMemberItemTracker.h"
#include "FortCampaignTeamMemberDailyBonusXpBoost.generated.h"

class UCommonTextBlock;
class UImage;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortCampaignTeamMemberDailyBonusXpBoost : public UFortCampaignTeamMemberItemTracker {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_Boost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_BoostIcon;
    
public:
    UFortCampaignTeamMemberDailyBonusXpBoost();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBoostAmountChanged();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentBoostAmount() const;
    
};

