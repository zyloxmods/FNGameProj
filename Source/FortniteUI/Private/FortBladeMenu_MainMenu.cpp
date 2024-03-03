#include "FortBladeMenu_MainMenu.h"

void UFortBladeMenu_MainMenu::TryPushWidgetAsModalPanel(UUserWidget* InWidget) {
}

void UFortBladeMenu_MainMenu::TryPushWidgetAsActivatablePanel(UUserWidget* InWidget, bool bHideHeader, bool bHideFooter, bool bHideChatWidget) {
}


void UFortBladeMenu_MainMenu::HandleMatchmakingFlowChanged(bool bFlowActive) {
}

UFortBladeMenu_MainMenu::UFortBladeMenu_MainMenu() {
    this->VBox_MainMenuButtons = NULL;
    this->Button_BackToHub = NULL;
    this->Button_Settings = NULL;
    this->Button_MobileBack = NULL;
    this->Button_SubgameSelection = NULL;
    this->RatingIcons_RatingIcons = NULL;
}

