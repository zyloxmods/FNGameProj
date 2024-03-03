#include "FortCampaignPurchaseScreen.h"


UFortCampaignPurchaseScreen::UFortCampaignPurchaseScreen() {
    this->ImageCycleTime = 1;
    this->bAllowCodeRedemption = false;
    this->BoundAnim_Intro = NULL;
    this->BoundAnim_Outro = NULL;
    this->Image_ProductLogo = NULL;
    this->Text_Tagline = NULL;
    this->Text_Description = NULL;
    this->Button_Purchase = NULL;
    this->Button_RedeemCode = NULL;
    this->Button_Back = NULL;
    this->Image_UpsellImage = NULL;
    this->ActivatableSwitcher_PreviewOrStore = NULL;
    this->StoreScreenClass = NULL;
}

