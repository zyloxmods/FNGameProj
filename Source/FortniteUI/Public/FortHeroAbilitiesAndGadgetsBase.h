#pragma once
#include "CoreMinimal.h"
#include "FortTeamMemberEntryBase.h"
#include "FortHeroAbilitiesAndGadgetsBase.generated.h"

class UFortCampaignHeroLoadoutItem;
class UFortGadgetsWidgetBase;
class UFortPerksWidget_NUI;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortHeroAbilitiesAndGadgetsBase : public UFortTeamMemberEntryBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHideAbilities;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHideGadgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AssignedMemberIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortPerksWidget_NUI* HorizontalAbilitiesList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortGadgetsWidgetBase* GadgetsWidget;
    
public:
    UFortHeroAbilitiesAndGadgetsBase();
    UFUNCTION(BlueprintCallable)
    void Refresh(UFortCampaignHeroLoadoutItem* HeroLoadout);
    
};

