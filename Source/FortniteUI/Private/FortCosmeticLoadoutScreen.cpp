#include "FortCosmeticLoadoutScreen.h"



UFortCosmeticLoadoutScreen::UFortCosmeticLoadoutScreen() {
    this->NameLoadoutPopupClass = NULL;
    this->ProgressModalClass = NULL;
    this->ProgressModalInstance = NULL;
    this->ScreenMode = EFortCosmeticLoadoutScreenMode::Browse;
    this->AthenaConfirmationClass = NULL;
    this->NewlySelectedItem = NULL;
    this->PreviewedLocker = NULL;
    this->ListView_Loadouts = NULL;
    this->Button_MobileClose = NULL;
    this->Button_RenameLoadout = NULL;
    this->Button_DeleteLoadout = NULL;
    this->SimpleFeatured_YellowButton = NULL;
    this->Card_SelectedPreset = NULL;
}

