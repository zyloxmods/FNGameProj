#include "AthenaDynamicReloadMtxScreen.h"

UWidget* UAthenaDynamicReloadMtxScreen::GetMtxRequiredButtonToFocus(EUINavigation InNavigation) const {
    return NULL;
}

UAthenaDynamicReloadMtxScreen::UAthenaDynamicReloadMtxScreen() {
    this->Text_TotalNeeded = NULL;
    this->Text_CurrentBalance = NULL;
    this->Switcher_DynamicOptions = NULL;
    this->Button_StarterKitOption = NULL;
    this->Overlay_MtxRequired = NULL;
    this->Overlay_StarterKit = NULL;
    this->Button_MtxRequiredOption = NULL;
    this->Button_MtxOtherOption = NULL;
    this->Button_MoreOptions = NULL;
    this->StaticReloadMtxScreen = NULL;
    this->MtxRequiredButtonToFocus = NULL;
}

