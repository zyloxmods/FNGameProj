#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "EFortRarity.h"
#include "FortHeroLoadoutSwitcherBase.generated.h"

class UCommonButton;
class UCommonTextBlock;
class UFortCampaignHeroLoadoutItem;
class UFortHeroAbilitiesAndGadgetsBase;
class UFortItemDetailsHostPanel;
class UHorizontalBox;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortHeroLoadoutSwitcherBase : public UCommonUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* HBox_LoadoutPagingContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortItemDetailsHostPanel* HeroLoadoutCommanderDetailsHostPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortHeroAbilitiesAndGadgetsBase* HeroAbilitiesAndGadgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* TextBlock_LoadoutDisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_PageLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_PageRight;
    
public:
    UFortHeroLoadoutSwitcherBase();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateRarity(const EFortRarity Rarity);
    
public:
    UFUNCTION(BlueprintCallable)
    void Update(const UFortCampaignHeroLoadoutItem* HeroLoadout);
    
};

