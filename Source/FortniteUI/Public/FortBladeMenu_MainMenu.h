#pragma once
#include "CoreMinimal.h"
#include "FortBladeMenu.h"
#include "FortBladeMenu_MainMenu.generated.h"

class UCommonButton;
class URestrictedCountryRatingIcons;
class UUserWidget;
class UVerticalBox;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortBladeMenu_MainMenu : public UFortBladeMenu {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* VBox_MainMenuButtons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_BackToHub;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_Settings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_MobileBack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_SubgameSelection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URestrictedCountryRatingIcons* RatingIcons_RatingIcons;
    
public:
    UFortBladeMenu_MainMenu();
protected:
    UFUNCTION(BlueprintCallable)
    void TryPushWidgetAsModalPanel(UUserWidget* InWidget);
    
    UFUNCTION(BlueprintCallable)
    void TryPushWidgetAsActivatablePanel(UUserWidget* InWidget, bool bHideHeader, bool bHideFooter, bool bHideChatWidget);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOpenSettings(FName TabNameID, const FString& SettingToSelect);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleMatchmakingFlowChanged(bool bFlowActive);
    
};

